#include "ordered.h"

void ordered(void* order,int o) {
    Order newOrder;
    newOrder.num = order_num;
    newOrder.state = 0;
    newOrder.e_time = -1;
    unsigned ThreadID = order_num;
    std::string name;
    if(o == 0) {
        Food* food = static_cast<Food *>(order);
        name = food->name;
    }
    else {
        Meal* meal = static_cast<Meal *>(order);
        name = meal->name;
    }
    int k;
    for (k = 0; k < M; k++)
    {
        if (name ==  meal[k].name)
        {
            int j = 0;
            while (meal[k].food[j] != -1)
            {
                newOrder.content[j] = meal[k].food[j];
                food[meal[k].food[j]].need++;
                j++;
            }
            newOrder.content[j] = -1;
            break;
        }
    }
    if (k == M)
    {
        for (k = 0; k < N; k++)
        {
            if (name == food[k].name)
            {
                food[k].need++;
                newOrder.content[0] = k;
                newOrder.content[1] = -1;
                break;
            }
        }
    }
    newOrder.textEdit = new QTextEdit(ui_order_window.output);
    newOrder.textEdit->setStyleSheet("QTextEdit {"
                            "fo nt-family: Arial;"  // 设置字体类型为Arial
                            "font-smooth: always;"
                            "font-size: 15px;"  // 设置字体大小
                            "color: black;"
                                 "}");
    newOrder.textEdit->setPlaceholderText("order " + QString::number(order_num+1) + " is making");
    newOrder.textEdit->setFixedWidth(190);
    newOrder.textEdit->setFixedHeight(50);
    newOrder.textEdit->setReadOnly(true);
    ui_order_window.verticalLayout_4->insertWidget(0, newOrder.textEdit); // 插入到布局的顶部
    if(sys_state == s_run) {
        orders[order_num].state = 0;
        orders[order_num ].hThread = reinterpret_cast<HANDLE>(_beginthreadex(nullptr, 0, order_distribute, (void *) &orders[order_num], 0,
                                                                             &orders[order_num].ThreadID));
        while(od == 0);
        od = 0;
    }
    else {
        int h = 0;
        while(newOrder.content[h] != -1) {
            food[newOrder.content[h]].need--;
            h++;
        }
        newOrder.state = 2;
        newOrder.e_time = -1;
        newOrder.textEdit->setPlaceholderText("order " + QString::number(order_num+1) + " is failed");
    }
    newOrder.s_time = sys_time;
    orders.push_back(newOrder);
    mtx_ordernumber.lock();
    order_num++;
    mtx_ordernumber.unlock();
    int time = re_change(newOrder.s_time);
    int h = time / 10000;
    int m = time % 10000 / 100;
    int s = time % 100;
    QString str;
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
    QTextEdit *textEdit = new QTextEdit(ui_order_window.input);
    textEdit->setStyleSheet("QTextEdit {"
    "font-family: Arial;"  // 设置字体类型为Arial
    "font-smooth: always;"
                             "font-size: 15px;"  // 设置字体大小
                             "color: black;"
                             "}");
    textEdit->setPlaceholderText( "order" +QString::number(order_num)+" " +str + "\n" +QString::fromStdString(name));
    textEdit->setFixedWidth(190);
    textEdit->setFixedHeight(50);
    textEdit->setReadOnly(true);
    ui_order_window.verticalLayout_3->insertWidget(0, textEdit);

}


