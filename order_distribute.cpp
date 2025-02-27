#include "order_distribute.h"
#include "init.h"
int judge(const int *content)
{
    int i = 0;
    while (content[i] != -1)
    {
        if (content[i] != -2)
        {
            return 1;
        }
        i++;
    }
    return 0;
}

unsigned __stdcall order_distribute(void *order)
{
    Order* o = static_cast<Order *>(order);
    mtx_residus.lock();
    residus++;
    mtx_residus.unlock();
    if (residus >= W1 + 1)
    {
        sys_state = s_stop;
    }
    od = 1;
    int i = 0;
    while (judge(o->content) && inbool == 1)
    {
        mtx_newsignal.lock();
        int local_new_signal = new_signal;
        mtx_newsignal.unlock();
        if (local_new_signal == o->num)
        {
            i = 0;
            while (o->content[i] != -1)
            {
                if (o->content[i] == -2)
                {
                    i++;
                    continue;
                }
                if (food[o->content[i]].have > 0)
                {
                    food[o->content[i]].have--;
                    food[o->content[i]].need--;
                    o->content[i] = -2;
                }
                i++;
            }
            if (!(judge(o->content)))
            {

                mtx_residus.lock();
                residus--;
                mtx_residus.unlock();
                o->state = 1;
                o->e_time = sys_time;
                if (o->e_time == o->s_time) {
                    sys_state = s_run;
                }
                int time = re_change(o->e_time);
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
                o->textEdit->setPlaceholderText("order " + QString::number(o->num+1) + " was finished at " + str);
            }
            int j ;
            mtx_ordernumber.lock();
            int order_num1 = order_num;
            mtx_ordernumber.unlock();
            for (j = o->num + 1; j < order_num1 ; j++)
            {
                if (orders[j].state == 0)
                {
                    mtx_newsignal.lock();
                    new_signal = j;
                    mtx_newsignal.unlock();
                    break;
                }
            }
            if (j == order_num1)
            {
                mtx_newsignal.lock();
                new_signal = -1;
                mtx_newsignal.unlock();
            }
        }
    }
    _endthreadex(0);

}
