#ifndef MY_TIME_H
#define MY_TIME_H

struct MyTimeStru {
    unsigned int year;
    unsigned int month;
    unsigned int day;
    unsigned int hour;
    unsigned int min;
    unsigned int second;
};

class MyTime {
public:
    MyTimeStru GetCurrentTime();
    unsigned int GetAbsoluteSec();
};


#endif