#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b,line ;
   printf("Please enter how much number of lines are you taken: ");
   scanf("%d",&line);

   for (a=1; a<=line; a++)
    {
      for (b=1; b<=a; b++)
      {
         printf("%d",b);
      }
   printf("\n");
   }

    return 0;
}
