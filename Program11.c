#include<stdlib.h>
#include<stdio.h>

int main()
{
    int no=0;

    printf("Enter no :\n");
    if (scanf("%d",&no) !=1)
    {
        printf("Invalid Input\n");

        return EXIT_FAILURE;
    }

    printf("Input is valid\n");

    return EXIT_SUCCESS;
}