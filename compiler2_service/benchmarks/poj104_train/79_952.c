#define NUM_ITER 23559

#include <header.h>

main_bench()
{
   int k,j,i,l,m,n;
  int a[20][2];
  int p=0;
  for(j=0;;j++)
  {
  for(l=0;l<=1;l++)
  {
  my_scanf("%d",&a[j][l]);
  }
  my_printf("\n");
  p++;
  if((a[j][0]==0)||a[j][1]==0)
   break;
  }
  for(j=0;j<=p;j++)
  {
  if((0<a[j][0]&&a[j][0]<=300)&& (0<a[j][1]&&a[j][1]<=300)) 
  {  k=0;
    for(i=2;i<=a[j][0];i++)
    {
     k=((a[j][1]%i)+k)%i;
    }
            my_printf("%d\n",k+1);
  }          
  }
}