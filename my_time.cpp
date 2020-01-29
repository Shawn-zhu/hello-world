#include "my_time.h"
#include <ctime>

MyTimeStru MyTime::GetCurrentTime()
{
    struct tm *local;
    time_t t = time(NULL);
    local = localtime(&t);
    
    MyTimeStru myTime;
    myTime.second = local->tm_sec;
    myTime.min = local->tm_min;
    myTime.hour = local->tm_hour;
    myTime.day = local->tm_mday;
    myTime.month = local->tm_mon + 1;
    myTime.year = local->tm_year + 1900;

    return myTime;
}

unsigned int MyTime::GetAbsoluteSec()
{
    time_t t = time(NULL);
    return t;
}
