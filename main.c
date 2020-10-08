#include <stdio.h>
#include "abcAnalysis.h"
int main ()
{
  int val, num , point;
  printf ("enter the value");
  scanf ("%d", &val);
  printf ("enter the number");
  scanf ("%d", &num);
  printf("enter the points");
  scanf("%d",&point);
  abc_analysis(val,num,point);
  return 0;
}



