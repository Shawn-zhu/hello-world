#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int doit(char* string)
{
    int tmp = atoi(string);
    while(string != NULL && isdigit(*string))
        string++;
    if(string == NULL)
        return tmp;

    while(string != NULL && *string == '*')
    {
        string++;
        tmp = tmp * atoi(string);
        while(isdigit(*string))
            string++;
    }
    if(string != NULL && *string == '+')
    {
        string++;
        tmp = tmp + doit(string);
    }
    else if(string != NULL && *string == '-')
    {
        string++;
        tmp = tmp - doit(string);
    }

    return tmp;
}

int main()
{
    char a[256];
    while(cin >> a)
        cout << "Result:" << doit(a) << endl;
}
                                                                                                                                                                                                                                                         
