#include <header.h>

main_bench()
{
      int m,n,e;
      my_scanf ("%d",&n);
      if (n==1)
      my_printf("End");
      else
      {
  do
 {    
      if (n%2==0)
      { 
      my_printf ("%d/%d=%d\n",n,2,m=n/2);n=n/2;}
      else
    { 
      my_printf ("%d*%d+%d=%d\n",n,3,1,e=n*3+1);n=n*3+1;
     } }
      while(n!=1);
      my_printf ("End\n");}
      getchar();getchar();getchar();
}