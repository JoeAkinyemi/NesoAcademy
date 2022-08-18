#include<stdio.h>
#define ops 4

// Designing a calculator with function pointers.
float sum(float a, float b) {return (a+b);}
float sub(float a, float b) {return (a-b);}
float mult(float a, float b) {return (a*b);}
float divi(float a, float b) {return (a/b);}

int main()
{
    float (*ptr2func[ops])(float, float) = {sum, sub, mult, divi};
    int choice;
    float a, b;
    printf("Enter your choice: 0 for sum, 1, for sub, 2 for mult, 3 for divi:\n");
    scanf("%d", &choice);
    printf("Enter the first number: ");
    scanf("%f", &a);
    printf("Enter the second number: ");
    scanf("%f", &b);
    printf("%f", ptr2func[choice](a, b));
    return 0;
}    