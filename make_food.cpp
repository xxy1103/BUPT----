#include "make_food.h"
void make_food()
{
    for (int i = 0; i < N; i++)
    {
        if (food[i].have < food[i].cap)
        {
            food[i].state++;
        }
        if (food[i].state == food[i].time)
        {
            food[i].have++;
            food[i].state = 0;
        }
    }
}