#include "init.h"

void Delay(ULONG ulMicroSeconds)
{
    LARGE_INTEGER  timeStop;
    LARGE_INTEGER  timeStart;
    LARGE_INTEGER  Freq;
    ULONG  ulTimeToWait;

    if (!QueryPerformanceFrequency( &Freq ))
        return;

    ulTimeToWait = Freq.QuadPart * ulMicroSeconds / 1000 / 1000;

    QueryPerformanceCounter ( &timeStart );

    timeStop = timeStart;

    while( timeStop.QuadPart - timeStart.QuadPart < ulTimeToWait )
    {
        QueryPerformanceCounter( &timeStop );
    }
}
HANDLE threadoutlook;
QMainWindow *mainWindow;
QMainWindow *sellerWindow;
QMainWindow *orderWindow;
Ui::orderWindow ui_order_window;
Ui::sellerWindow ui_seller_window;
Ui::MainWindow ui_main_window;
void mainwindow();
unsigned __stdcall  time_contral(void *);
void new_window_order() {
    if(j_order == 0) {
        new_signal = -1;
        j_order++;
        orderWindow = new QMainWindow();  // 创建新窗口
        ui_order_window.setupUi(orderWindow);  // 初始化新窗口
        mainWindow->setStyleSheet("background-color: white;");
        Ui::GroupBox1 groupBoxUi;
        for(int i = 0;i<N;i++) {
            food[i].groupBox1 = new QGroupBox(ui_order_window.FOOD);
            food[i].imagePath = QString(":/img/") + QString::fromStdString(food[i].name) + QString(".png");
            groupBoxUi.setupUi(food[i].groupBox1);
            groupBoxUi.label->setText(QString::fromStdString(food[i].name));
            groupBoxUi.pushButton_2->setStyleSheet("border-image: url(" + food[i].imagePath + ");");
            ui_order_window.horizontalLayout->addWidget(food[i].groupBox1);
            QObject::connect(groupBoxUi.pushButton_15, &QPushButton::clicked, [&,i](){ ordered(&food[i],0); });
        }
        Ui::GroupBox_meal groupBoxUi_MEAL;
        for(int i = 0;i<M;i++) {
            meal[i].groupBox = new QGroupBox(ui_order_window.MEAL);
            groupBoxUi_MEAL.setupUi(meal[i].groupBox);
            groupBoxUi_MEAL.label->setText(QString::fromStdString(meal[i].name));
            Ui::GroupBox_c groupBoxUi_c;
            for(int j = 0;meal[i].food[j] != -1;j++) {
                int k = meal[i].food[j];
                auto groupBox = new QGroupBox(groupBoxUi_MEAL.scrollAreaWidgetContents);
                groupBoxUi_c.setupUi(groupBox);
                groupBoxUi_c.label->setText(QString::fromStdString(food[k].name));
                groupBoxUi_c.pushButton->setStyleSheet("border-image: url(" + food[k].imagePath + ");");
                groupBoxUi_MEAL.verticalLayout->addWidget(groupBox);
            }
            QObject::connect(groupBoxUi_MEAL.pushButton_15, &QPushButton::clicked, [&,i](){ ordered(&meal[i],1); });
            ui_order_window.horizontalLayout_2->addWidget(meal[i].groupBox);
        }
        QObject::connect(ui_order_window.back, &QPushButton::clicked, [&](){
            mainWindow->show();
            orderWindow->close();
        });
    }
    else{
        orderWindow->show();
            mainWindow->hide();
    }

}
unsigned __stdcall Capmonitor(void *food)
{
    Food* f = static_cast<Food*>(food);
    while(inbool)
    {
            for(int i=0;i<N;i++)
            {
                if (auto capLabel = f[i].groupBox2->findChild<QLabel *>("cap")) {
                    capLabel->setText(QString::number(f[i].have));
                }
                if (auto capLabel = f[i].groupBox2->findChild<QLabel *>("need")) {
                    capLabel->setText(QString::number(f[i].need));
                }
            }
    }
    _endthreadex(0);
}
void new_window_seller() {
    if(j_seller == 0) {
        Ui::GroupBox2 groupBoxUi;
        sellerWindow = new QMainWindow();  // 创建新窗口
        ui_seller_window.setupUi(sellerWindow);  // 初始化新窗口
        mainWindow->setStyleSheet("background-color: white;");
        for(int i=0;i<N;i++)
        {
            food[i].groupBox2 = new QGroupBox(ui_seller_window.FOOD);
            food[i].groupBox2->setObjectName(QString("groupbox_%1").arg(i));
            food[i].imagePath = QString(":/img/") + QString::fromStdString(food[i].name) + QString(".png");
            groupBoxUi.setupUi(food[i].groupBox2);
            groupBoxUi.name->setText(QString::fromStdString(food[i].name));
            groupBoxUi.pushButton_2->setStyleSheet("border-image: url(" + food[i].imagePath + ");");
            groupBoxUi.mtime->setText(QString::number(food[i].time));
            groupBoxUi.mcap->setText(QString::number(food[i].cap));
            groupBoxUi.cap->setText(QString::number(food[i].have));
            groupBoxUi.need->setText(QString::number(0));
            ui_seller_window.horizontalLayout->addWidget(food[i].groupBox2);

        }
        threadoutlook=reinterpret_cast<HANDLE>(_beginthreadex(nullptr, 0, Capmonitor, food, 0, nullptr));
        Ui::mcombo groupBoxUi_mcombo;
        for(int i=0;i<M;i++)
        {
            meal[i].groupBox2 = new QGroupBox(ui_seller_window.MEAL);
            groupBoxUi_mcombo.setupUi(meal[i].groupBox2);
            groupBoxUi_mcombo.label->setText(QString::fromStdString(meal[i].name));
            Ui::GroupBox_c groupBoxUi_c;
            for(int j = 0;meal[i].food[j] != -1;j++) {
                int k = meal[i].food[j];
                auto groupBox2 = new QGroupBox(groupBoxUi_mcombo.scrollAreaWidgetContents);
                groupBoxUi_c.setupUi(groupBox2);
                groupBoxUi_c.label->setText(QString::fromStdString(food[k].name));
                groupBoxUi_c.pushButton->setStyleSheet("border-image: url(" + food[k].imagePath + ");");
                groupBoxUi_mcombo.verticalLayout->addWidget(groupBox2);
            }
            ui_seller_window.horizontalLayout_2->addWidget(meal[i].groupBox2);
        }
        j_seller++;
        QObject::connect(ui_seller_window.back, &QPushButton::clicked, [&](){
            mainWindow->show();
            sellerWindow->close();
        });
        QObject::connect(ui_seller_window.menuinput, &QPushButton::clicked, [&](){
            QString sourceFilePath = QFileDialog::getOpenFileName(nullptr, QCoreApplication::translate("MainWindow", "Open File"), QStandardPaths::writableLocation(QStandardPaths::DesktopLocation), QCoreApplication::translate("MainWindow", "Dictionary Files (*.dic);;All Files (*)"));
            if (sourceFilePath.isEmpty()) {
                qDebug() << "No file selected!";
                return;
            }
            QString appDirPath = QCoreApplication::applicationDirPath();
            std::cout<<appDirPath.toStdString()<<std::endl;
            QString targetDirPath = appDirPath ;
            QDir targetDir(targetDirPath);
            QFileInfo sourceFileInfo(sourceFilePath);
            fileName = sourceFileInfo.fileName();
            QString targetFilePath = targetDir.filePath(fileName);
            if (QFile::exists(targetFilePath)) {

                if (!QFile::remove(targetFilePath)) {
                    std::cout << "Failed to remove existing file!";
                    return;
                }
            }
            if (!QFile::copy(sourceFilePath, targetFilePath)) {
                std::cout<<"Failed to copy file from "<<std::endl;
                qDebug() << "Failed to copy file from " << sourceFilePath << " to " << targetFilePath;
                return;
            }
            qDebug() << "File copied successfully from " << sourceFilePath << " to " << targetFilePath;
            inbool=0;
            sellerWindow->close();
            orderWindow->close();
            init();
            mainwindow();
        });
    }
    else {
        sellerWindow->show();
        mainWindow->hide();
    }
}
void mainwindow()
{
    mainWindow = new QMainWindow();
    ui_main_window.setupUi(mainWindow);
    mainWindow->setStyleSheet("background-color: white;");
    new_window_order();
    new_window_seller();
    QObject::connect(ui_main_window.order, &QPushButton::clicked , &ui_main_window, &new_window_order);
    QObject::connect(ui_main_window.seller, &QPushButton::clicked , &ui_main_window, &new_window_seller);
    HANDLE hThread_time = (HANDLE)_beginthreadex(nullptr, 0, time_contral, (void *) &ui_order_window, 0, nullptr);
    mainWindow->show();
}
int main(int argc, char *argv[]) {
    init();
    QApplication a(argc, argv);
    mainwindow();
    return a.exec();
}

unsigned __stdcall  time_contral(void *orderWindow )
{
    auto ui_order_window = static_cast<Ui::orderWindow *>(orderWindow);
    int before = 1;
    int num = 0;
    QString str;
    struct tm timeStart, timeEnd;
    int speed = ui_order_window->speed->value();
    while (sys_time < end_t&&inbool==1)
    {
        speed = ui_order_window->speed->value();
        mtx_ordernumber.lock();
        int order_num1 = order_num;
        mtx_ordernumber.unlock();
        for (int j = 0; j < order_num1; j++)
        {
            if (orders[j].state == 0)
            {
                mtx_newsignal.lock();
                new_signal = j;
                mtx_newsignal.unlock();
                break;
            }
        }
        mtx_newsignal.lock();
        int local_new_single = new_signal;
        mtx_newsignal.unlock();
        while (local_new_single != -1) {
            mtx_newsignal.lock();
            local_new_single = new_signal;
            mtx_newsignal.unlock();
        }
        make_food();
        sys_time++;
        Delay(1000*1000 / speed);
        int time = re_change(sys_time);
        int h = time / 10000;
        int m = time % 10000 / 100;
        int s = time % 100;
            if(h<10) {
                str = "0" + QString::number(h) + ":";
            }
            else {
                str = QString::number(h) + ":";
            }
            if(m<10) {
                str+= "0" + QString::number(m) + ":";
            }
            else {
                str+= QString::number(m) + ":";
            }
            if(s<10) {
                str+= "0" + QString::number(s);
            }
            else {
                str+= QString::number(s);
            }
            ui_order_window->time->setText(str);
            num = 0;
        if (residus < W2)
        {
            sys_state = s_run;
        }
        if (sys_time >= close_t)
        {
            sys_state = s_stop;
        }
        if(sys_state != before) {
            if(sys_state == s_run) {
                ui_order_window->sts_t->setText("开启");
                ui_order_window->sts_t->setStyleSheet("border-radius: 30px; font: bold 17px; color: rgb(255, 185, 0);");
            }
            else {
                ui_order_window->sts_t->setText("关闭");
                ui_order_window->sts_t->setStyleSheet("border-radius: 30px; font: bold 17px; color:red;");
            }
            before = sys_state;
        }
    }
    std::ofstream file("output.txt");
    for(int i = 0;i<order_num;i++) {
        file << "order " << i+1 << " : ";
        if(orders[i].state == 1) {
            file << "success at  "+ timeget(orders[i].s_time) << std::endl;
        }
        else {
            file << "failed" << std::endl;
        }
    }
    _endthreadex(0);
}


