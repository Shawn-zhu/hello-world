#include "mammal.h"
#include <stdlib.h>
#include <iostream>

using namespace std;

Mammal::Mammal ()
{
    birthInfo_.year = 0;
    birthInfo_.month = 0;
    birthInfo_.day = 0;
    gender_ = male;
}

void Mammal::Born(void)
{
    birthInfo_ = localTime_.GetCurrentTime();
    srand(localTime_.GetAbsoluteSec());
    unsigned int randomNum = rand();
    gender_ = (randomNum % 2) ? femal : male;
    isBorn = true;
    PrintBirthInfo();
}

void Mammal::PrintBirthInfo()
{
    MyTimeStru birthday;

    if (!GetBirthDay(birthday))
    {
        cerr << "Emily is not borned!";
    }
    cout << "In " << birthday.year << "-" << birthday.month << "-" << birthday.day << "-" <<
    birthday.hour << "-" << birthday.min << "-" << birthday.second << endl;
    cout << "Emily is borned!" << endl;

    Gender gender;
    if (!GetGender(gender))
    {
        cerr << "Emily is not borned!" << endl;
    }
    string genderString = gender == femal ? "femal" : "male";
    cout << "And " << ((gender == femal) ? "she " : "he ") << "is a " << ((gender == femal) ? "girl." : "boy.") << endl;
}

bool Mammal::GetBirthDay(MyTimeStru &birthDayInfo)
{
    if (isBorn) {
        birthDayInfo = birthInfo_;
        return true;
    } else {
        return false;
    }
}

bool Mammal::GetGender(Gender &gender)
{
    if (isBorn) {
        gender = gender_;
        return true;
    } else {
        return false;
    }
}
