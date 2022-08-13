#include <stdio.h>
// swapping two numbers without introduning a third variable

int method();
int method1();

int main()
{
    int a=3;
    int b=4;

    printf("--------------\n");

    printf("a : %d, b : %d \n", a, b);

    a = a+b;
    b = a-b;
    a = a-b;
    printf("a : %d, b : %d \n", a, b);
    method1();
    method();
}

// Another method 
int method()
{
    int a=5;
    int b=6;

    printf("------------\n");
    printf("a : %d, b : %d\n", a, b);

    //XOR METHOD: 1 1 -> 0   1 0 -> 1   1 1 -> 0
    a = a^b; // 1 0 1 ^ 1 1 0 --> 0 1 1
    b = a^b; // 0 1 1 ^ 1 1 0 --> 1 0 1 -> 5
    a = a^b; // 0 1 1 ^ 1 0 1 --> 1 1 0 -> 6

    printf("a : %d, b : %d \n", a, b);
}

//shortest way to swap values
int method1()
{
    int a=5;
    int b=6;
    printf("--------------------\n");
    printf("a : %d, b : %d \n", a, b);
    b = a+b-(a=b);
    printf("a : %d, b : %d\n", a, b);
}