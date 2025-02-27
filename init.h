//UI 类头文件

#ifndef INIT_H
#define INIT_H
#include "UI/ui_groupbox1.h"
#include "UI/ui_1.h"
#include "UI/ui_order.h"
#include "UI/ui_MEAL.h"
#include "UI/ui_content.h"
#include "UI/ui_groupbox2.h"
#include "UI/ui_seller.h"
#include "UI/ui_order.h"
#include "UI/ui_mcombo.h"
//QT头文件
#include <QTextEdit>
#include <QLineEdit>
#include <QStandardPaths>
#include <QFileDialog>
#include <QCoreApplication>
//C++头文件
#include <windows.h>
#include <future>
#include <cstdio>
#include <cstring>
#include <vector>
#include <iomanip>
#include <ctime>
#include <process.h>
#include <fstream>
#include <chrono>
#include <iostream>
#include <mutex>
#include <thread>
//自建头文件
#include "order_distribute.h"
#include "time_change.h"
#include "ordered.h"
#include "make_food.h"
#include "make_food.h"

#define s_run 1
#define s_stop 0
// 系统开始时间常量定义
#define start_t 0     // 早上7点开始点餐系统
#define close_t 54001 // 晚上10点关闭点餐系统
#define end_t 61200   // 晚上11点59分59秒前完成所有订单
typedef struct Food
{
    std::string name; // 食物名称
    int num;        // 食物编号
    int time;       // 食物制作时间
    int cap;        // 食物容量
    int have;       // 已有食物数量
    int state;      // 食物状态
    int need;
    QGroupBox *groupBox1;
    QGroupBox *groupBox2;
    QString imagePath;
} Food;

typedef struct Meal
{
    std::string name; // 套餐名称
    int num;        // 套餐编号
    int* food;  // 套餐包含的食物编号
    QGroupBox *groupBox;
    QGroupBox *groupBox2;
    QString imagePath;
} Meal;
typedef struct  Order
{
    int num;           // 订单编号
    int content[100];  // 订单套餐编号
    int s_time;        // 下单时间
    int e_time;        // 订单结束时间
    int state;         // 订单状态
    HANDLE hThread;    // 订单线程
    unsigned ThreadID; // 订单线程ID
    QTextEdit *textEdit;
}Order;
// 食物种类与套餐的种类数// 订单数
void init();
extern int N,M;
extern Food *food;
extern Meal *meal;
extern int W1, W2, residus;
extern int order_num;
extern int sys_state;
extern int new_signal, lock,od;         //
extern int sys_time;
extern int speed;
extern Ui::orderWindow ui_order_window;
extern std::vector<Order> orders;
extern std::mutex mtx_newsignal,mtx_residus,mtx_ordernumber;
extern QString fileName;
extern int j_order ,j_seller;
extern int inbool;
#endif //INIT_H
