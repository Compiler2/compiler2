#define NUM_ITER 2381

#include <header.h>

int main_bench()
{
  int i,j,t=0,k,m;
  int a[100][100];
   for(j=0;j<100;j++)
     {
       my_scanf("%d",&a[t][j]);
       if(a[t][j]==0) {t=t+1;}
	   if(a[t][j]==-1)  {break;}
	 }
  for(k=0;k<t;k++)
   {
     m=0;
    for(i=0;i<100;i++)
     {
       for(j=0;j<100;j++)
       {
         if(a[k][i]==2*a[k][j]&&a[k][i]!=0)
         m++;
       }
      
     }
    my_printf("%d\n",m);
   }
  return 0;
}
