#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, i, j, *p;
    printf("Enter the total number of values: ");
    scanf("%d", &n);
    /* Memory allocation */
    p = (int*)malloc(n*sizeof(int));
    
    printf("\nEnter the values:");
    for(i=0; i<n; i++)
    {
        scanf("%d", (p+i));
    }
    /* Reallocation of the memory */
    printf("\nEnter the updated size of n: ");
    scanf("%d", &j);

    int *p1= (int*)realloc(p,j*sizeof(int));
    /* this the loop that orignal memory that was allocated*/
    for(i=0; i<n; i++)
    {
        printf("%d\t", *(p+i));
    }
    /* this the loop that will prinnt the new size of allocated memory*/
    for(i=0; i<j; i++)
    {
        printf("\n%d\t", *(p1+i));
    }
    /* we freed only p1 because it also pointed to p.*/
    free(p1);
}