#include "init.h"
Food *food;                   // 食物
Meal *meal;                   // 套餐
int N,M;                      // 食物种类与套餐的种类数
int W1, W2, residus;          // 系统开关的条件值
int order_num;                //订单个数
std::vector<Order> orders;    //动态订单数组
int sys_time;                 //系统时间
int sys_state;
int new_signal, lock,od;         // 同步锁信号
std::mutex mtx_newsignal,mtx_residus,mtx_ordernumber;
int speed; //倍速
QString fileName = "dict.dic";
int j_order ,j_seller;
int inbool;
void init()
{
    j_order = 0;
    j_seller = 0;
    inbool = 1;
    speed = 1;
    residus = 0;
    sys_state = s_run;
    sys_time = 0;
    order_num = 0;
    new_signal = -1;
    lock = 0;
    od = 0;
    orders.reserve(10000);
    std::ifstream dict(fileName.toStdString());
    if (!dict.is_open()) {
        std::cerr << "Unable to open file dict.dic";
        return;
    }
    dict >> N >> M;
    food = new Food[N];
    meal = new Meal[M];
    for (int i = 0; i < N; i++)
    {
        dict >> food[i].name;
        food[i].num = i;
        food[i].state = 0;
        food[i].have = 0;
        food[i].need=0;
    }
    for (int i = 0; i < N; i++)
    {
        dict >> food[i].time;
    }
    for (int i = 0; i < N; i++)
    {
        dict >> food[i].cap;
    }
    dict >> W1 >> W2;
    residus = 0;
    int i = 0;
    std::string temp;
    dict >> temp;
    meal[i].name = temp;
    while (i < M)
    {
        meal[i].num = i;
        std::vector<int> food_indices;
        while (dict >> temp)
        {
            int j;
            for (j = 0; j < N; j++) {
                if (temp == food[j].name)
                {
                    food_indices.push_back(j);
                    break;
                }
            }
            if (j == N)
            {
                meal[i+1].name = temp;
                break;
            }
        }
        meal[i].food = new int[food_indices.size() + 1];
        std::copy(food_indices.begin(), food_indices.end(), meal[i].food);
        meal[i].food[food_indices.size()] = -1;
        i++;
    }
    dict.close();
}