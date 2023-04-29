#define NUM_ITER 37339

#include <header.h>

int main_bench()
{
      long int a[100000],b,c,m,n,i,t,j,e=0,p;
      my_scanf("%d",&n);p=n;
      for(i=0;i<n;i++)
      my_scanf("%d",&a[i]);
      my_scanf("%d",&m);
      for(c=0;c<n;c++)
      {if(a[c]==m)e++;}
      
      for(c=0;c<=e;c++)
      {for(i=0;i<n-1;i++)
      {if(a[i]==m) 
           {a[i]=a[i+1];a[i+1]=m;}
      }}
      if(n-e-1>0)
      {for(i=0;i<n-e-1;i++)
      {my_printf("%d ",a[i]);}my_printf("%d",a[n-e-1]);}
      if(n-e-1==0)my_printf("%d",a[n-e-1]);
      getchar();getchar();getchar();
} 
