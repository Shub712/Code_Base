#include<stdio.h>

int main()
{
    int iNo1 = 10;
    const int iNo2 = 20;

    //Below Lines Gnererates error

    iNo1++; //iNo1 = iNo1 + 1;
    iNo2++; //iNo2 = iNo2 + 1; //Error
    iNo2 = 30; //Error



    return 0;
}