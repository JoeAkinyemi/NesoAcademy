#include <stdio.h>
 
 int main()
 {
    int a=10, b=50, c=30;
    if (a>b && a>c)
    {
        printf("%d is greater", a);
    }
    else if (b>c)
    {
        printf("%d is greater", b);
    }
    else
    {
        printf("%d is greater", c);
    }
    
    return 0;
 }