#include<stdio.h>

int main()
{
    int Arr[5] = {10,20,30,40,50};
    printf("Size of Arr : %ld\n", sizeof(Arr)); //20

    printf("Arr : %ld\n", Arr); //100
    printf("&Arr : %ld\n", &Arr); //100

    printf("Arr + 1: %ld\n", Arr + 1); //104
    printf("&Arr + 1 : %ld\n", (&Arr) + 1); //120


    



    return 0;
}