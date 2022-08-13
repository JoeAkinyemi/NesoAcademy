#include<stdio.h>
void main()
{
    int a[5], i;
    printf("Enter the array elements: \n");
    for(i=0; i<5;i++)
        scanf("%d", &a[i]);

    for(i=0; i<5; i++)
        printf("array of the index %d is: %d \n", i, a[i]);    
}