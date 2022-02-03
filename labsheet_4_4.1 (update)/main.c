#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,r,i;
    long long int nPr , n_factorial=1, nr_factorial=1;

      printf("Please enter any two positive value for n and r: ");
      scanf("%d %d", &n,&r);

    for (i=1; i<=n; i++)
      {
          n_factorial *=i;
      }

    for (i=1; i<=(n-r); i++)
        {
           nr_factorial *=i;
        }

    nPr = n_factorial/nr_factorial;

  printf("The value of %dP%d is = %lld ",n,r,nPr);

    return 0 ;
}
