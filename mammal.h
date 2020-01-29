#ifndef MAMMAL_H
#define MAMMAL_H
#include <string>
#include "my_time.h"

using namespace std;

enum Gender {
    femal,
    male,
};

class Mammal {
public:
    Mammal();

    void Born(void);
    bool GetBirthDay(MyTimeStru &birthdayInfo);
    bool GetGender(Gender &gender);
    void PrintBirthInfo();

        private : bool isBorn = false;
    string name_ = "no name";
    MyTimeStru birthInfo_;
    MyTime localTime_;
    Gender gender_;
};



#endif
