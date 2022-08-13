#include<stdio.h>

int main(){
    int n, res=0, q, rem;
    printf("Please enter the number: ");
    scanf("%d", &n);

    q = n;

    while (q!=0)
    {
        /* code */
        rem = q%10;
        res = res*10 + rem;
        q = q/10;
    }
    if(res == n)
        printf("It is a pallindrome");
    else
        printf("No, it is not a pallindrome");
}