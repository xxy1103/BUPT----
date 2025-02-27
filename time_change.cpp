#include "time_change.h"

int re_change(int time)
{
    int h = time / 3600 + 7;
    int m = (time % 3600) / 60;
    int s = time % 60;
    return h * 10000 + m * 100 + s;
}

int time_change(int h, int m, int s)
{
    return ((h - 7) * 3600 + (m * 60) + s);
}

std::string  timeget(int time) {
    std::string str;
    int h = time / 10000;
    int m = time % 10000 / 100;
    int s = time % 100;
    if(h<10) {
        str = "0" + std::to_string(h) + ":";
    }
    else {
        str = std::to_string(h) + ":";
    }
    if(m<10) {
        str+= "0" + std::to_string(m) + ":";
    }
    else {
        str+= std::to_string(m) + ":";
    }
    if(s<10) {
        str+= "0" + std::to_string(s);
    }
    else {
        str+= std::to_string(s);
    }
    return str;
}