#include<stdio.h>
#include"mystery.h"

int mystery(int n)
{
//input range will be [1, 20]
int n1 = 0, n2 = 1, result, count;

if(n < 1 || n > 20)
{
    printf("Please use an input within the range [1, 20]\n");
}

else if(n == 1)
{
return 1;
}

else if(n == 2)
{
return 1;
}


else
{
    for ( count = 1; count <= n ; count++ )
   {
      if ( count <= 1 )
         result = count;
      else
      {
         result = n1 + n2;
         n1 = n2;
         n2 = result;
      }

   }
    return result;
}





}
