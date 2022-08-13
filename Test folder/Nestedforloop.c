#include<stdio.h>
// nested for loop

int main()
{
    int i,j; // counter
    for (i=1; i<=4; i++)
    {
        for(j=1; j<=4; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
