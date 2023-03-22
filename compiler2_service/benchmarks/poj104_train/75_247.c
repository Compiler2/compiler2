#define NUM_ITER 723

#include <header.h>

int max(int a,int b)
{return(a>b?a:b);}
int main_bench()
{
    int imax=0,s=0,x[2200],y[2200],i=0,j,k,m;
    char c;
    do
    {
      my_scanf("%d",&x[i]);
      y[i]=1;
      i++;  
    }
    while((c=getchar())!='\n');
    my_printf("%d ",i);
    do
    {
      my_scanf("%d",&x[i]);
      x[i]--;
      y[i]=-1;
      i++; 
    }
    while((c=getchar())!='\n');
    for(j=0;j<i;j++)
    {
    for(k=i-1;k>j;k--)
    {
      if(x[k]<x[k-1])
      {
        m=x[k];
        x[k]=x[k-1];
        x[k-1]=m;
        m=y[k];
        y[k]=y[k-1];
        y[k-1]=m;             
      }                
    }
    s+=y[j];
    imax=max(imax,s);
    }
    my_printf("%d",imax);
    return 0;
}

