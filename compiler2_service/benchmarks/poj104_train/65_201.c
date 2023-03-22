#include <header.h>


int main_bench()
{
    int n,k,a,b,i,j;
    int x[201];
    int y[201];

    my_scanf("%d",&n);
    for(i=0;i<n;i++)
   {
      my_scanf("%d",&(x[i]));
      my_scanf("%d",&(y[i]));
    }
  a=b=0;
  
 for(i=0;i<n;i++)
   {
      if(x[i]==1)
     {
        if(y[i]==0) b=b+1;
        if(y[i]==2) a=a+1;

      }

       if(x[i]==2)
     {
        if(y[i]==0) a=a+1;
        if(y[i]==1) b=b+1;

      }

      if(x[i]==0)
     {
        if(y[i]==1) a=a+1;
        if(y[i]==2) b=b+1;

      }

    }


  if(a>b) my_printf("A");
else
{
  if(a<b) my_printf("B");

  else my_printf("Tie");
}


  return 0;
}