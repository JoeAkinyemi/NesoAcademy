#include<stdio.h>

// Designing a calculator.
float sum(float a, float b) {return (a+b);}
float sub(float a, float b) {return (a-b);}
float mult(float a, float b) {return (a*b);}
float divi(float a, float b) {return (a/b);}

int main()
{
    int choice;
    float a, b, result;
    // Choice what operation you want to perform on the numbers
    printf("Enter your choice: 0 for sum, 1, for sub, 2, for mult, 3 for divi:\n");
    scanf("%d", &choice);
    // Input the numbers
    printf("Enter the first number: ");
    scanf("%f", &a);
    printf("Enter the second number: ");
    scanf("%f", &b);

    // the case box where the value is been generated
    switch (choice)
    {
        case 0: result = sum(a, b); break;
        case 1: result = sub(a, b); break;
        case 2: result = mult(a, b); break;
        case 3: result = divi(a, b); break;
    }
    printf("%f", result);
    return 0;
}