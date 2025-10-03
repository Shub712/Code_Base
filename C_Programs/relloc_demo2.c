#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *Arr = NULL;
    
    //Step 1 : Allocate the memory 
    Arr = (int*)malloc(5 * sizeof(int)); //20bytes memory 

    //Step 2 : Use the memory

    Arr = (int*)realloc(Arr,3*sizeof(int)); //40 bytes memory


    free (Arr);

    return 0;
}