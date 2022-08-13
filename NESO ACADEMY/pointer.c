#include<stdio.h>
void minMax(int arr[], int len, int *min, int *max)
{
    *min = *max = arr[0];
    int i;
    for(i=1; i<len; i++)
    {
        if(arr[i] > *max)
            *min = arr[i]; 
        if(arr[i] < *min)
            *min = arr[i];
    }
}

int main(){
int a[] = {2, 43, 42, 6, 55, 70, 61, 90, 99, 100, 88, 22, 41};
int min, max;
int len = sizeof(a)/sizeof(a[0]);
minMax(a, len, &min, &max);
printf("Minimum value in the array is: %d and the maximum value in the array is: %d", min, max);
}