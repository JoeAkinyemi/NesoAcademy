#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, i, *p;
    printf("Enter the total number of values:");
    scanf("%d", &n);

    p = (int*)malloc(n*sizeof(int));
    
    printf("\nenter the values:");
    for(i=0; i<n; i++)
    {
        scanf("%d", (p+i));
    }
    for(i=0; i<n; i++)
    {
        printf("%d\t", *(p+i));
    }
    free(p);
}