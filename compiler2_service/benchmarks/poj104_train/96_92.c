#define NUM_ITER 986178

#include <header.h>

int main_bench()
{
    char a[100],b[100];
    int c[100],d[100],i,j,n,s,t=0;
    my_scanf("%s",a);
     n=strlen(a);
    for(i=0;i<n;i++)
    {c[i]=a[i]-'0';}
    for(i=0;i<n;i++)
     { t = t*10+c[i];
       d[i]=t/13;
       t = t%13;
       }
       if(n==1||(n==2&&d[1]==0))
       my_printf("0");
       else
    {
        if(d[1]==0) 
     for(i=2;i<n;i++)
      {
        my_printf("%d",d[i]);
        }
      else 
        for(i=1;i<n;i++)
      {
        my_printf("%d",d[i]);
        }
        } 
        my_printf("\n%d\n",t); 
      getchar();
      getchar();
}