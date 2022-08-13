#include <stdio.h>
int main()
{
    int i = 20;

    switch (i)
    {
        case 0: 
            printf("Zero\n");
            break;
        case 1:
            printf("One \n");
            break;
        case 2:
            printf("Two\n");
            break;
        case 3:
            printf("Three\n");
            break;
        default:
            printf("Not a valid number");
    }
}