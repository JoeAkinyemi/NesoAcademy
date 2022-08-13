#include <stdio.h>
/**
 * modif_my_char_var - Solve me
 *
 * Return: nothing.
 */
void modif_my_char_var(char *cc, char ccc)  
{
   *cc = 'o';
   ccc = 'l';
   cc = &ccc;
   printf("###################################\n");
   printf("The value of 'cc': %c\n", cc);
  /* printf("The address of 'cc': %p\n",&cc);*/
   printf("The value of 'ccc': %c\n", ccc);
   /*printf("The address of 'ccc': %p\n",&ccc);*/
}

/**
 * main - Solve me
 *
 * Return: Always 0.
 */
int main(void)
{
   char c;
   char *p;

   p = &c;
   c = 'H';
   printf("The value of 'c': %c\n", c);
   printf("The address of 'c': %p\n", &c);
   printf("The value of 'p': %p\n", p);
   printf("The address of 'p': %p\n", &p);
   modif_my_char_var(p, c);
   printf("The value of 'c' after the call: %c\n", c);
   printf("The address of 'c' after the call: %p\n",&c);
   printf("The vaue of 'p' after the call: %c\n", p);
   printf("The address of 'p' after the call: %p\n",&p);
   return (0);
}