#include "epoch.h"
/* Your code here! *///
int hours(time_t time)
{
    int hour = time / 60 / 60;
    return hour;
}

int days(time_t time)
{
    int day = time / 60 / 60 / 24;
    return day;
}
int years(time_t time)
{
    int year = time / 60 / 60 / 24 / 365;
    return year;
}