#define NUM_ITER 2340

#include <header.h>

void paixu(int *a,int x)
{
    int i=x-1,t,j;
    while(i>=1)
    {
               for(j=0;j<i;j++)
               {
                  if(a[j]>a[j+1])
                  {
                                 t=a[j];
                                 a[j]=a[j+1];
                                 a[j+1]=t;
                                 }
                                 }
                                 i--;
                                 }
                                 }
void lianjie(int *a,int x,int *b,int y,int *c)         
{
     int i=0,j=0,t=1;
     while(i<x)
     {
                   c[i]=a[i];
                   i++;
                   }
     while(j<y)
     {
                   c[i]=b[j];
                   i++;
                   j++;
                   }
     my_printf("%d",c[0]);
     while(t<x+y)
     {
                 my_printf(" %d",c[t]);
                 t++;
                   }
                   }
int main_bench()
{
      int s,t,i;
      my_scanf("%d %d",&s,&t);
      int *a=(int*)malloc(s*sizeof(int));
      int *b=(int*)malloc(t*sizeof(int));
      int *c=(int*)malloc((s+t)*sizeof(int));
      for(i=0;i<s;i++)
      my_scanf("%d",&a[i]);
      for(i=0;i<t;i++)
      my_scanf("%d",&b[i]);
      paixu(a,s);
      paixu(b,t);
      lianjie(a,s,b,t,c);
      }
