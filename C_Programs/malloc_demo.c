#include<stdio.h>
#include<stdlib.h>

int main()
{
    int length = 0;
    int *Arr = NULL;
    
    printf("Enter the number of elements\n");
    scanf("%d",&length);

    //Step 1: allocate the memory

    Arr = (int*)malloc(length * sizeof(int));
    if (Arr==NULL)
    {
        printf("Unable to allocate the memory");
    }
    else
    {
        printf("Memory gets allocated successfully");
    }

    //Step 2: use the memory...Requires Logic

    //Step 3 : Free the memory
    
     free(Arr);

    



    return 0;
}