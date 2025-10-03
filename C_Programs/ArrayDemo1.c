#include<stdio.h>

int main()
{
    int Arr[4] = {10,20,30,40};

    int Brr[] = {10,20,30,40};

    int Crr[6] = {10,20,30};

    printf("Size of Arr is : %ld", sizeof(Arr)); //16
    printf("Size of Brr is : %ld", sizeof(Brr));  // 16
    printf("Size of Crr is : %ld", sizeof(Crr));  //24







    return 0;
}