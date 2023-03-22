#include <header.h>


int main_bench()
{
    int a[100001],n,i,j,k,d=0;
    int *p;
    p=a;
    
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
       my_scanf("%d",p+i);
    my_scanf("%d",&k);
    for(i=0;i<n;i++)
       if(*(p+i)==k)d++;    
    for(i=0;i<n;i++)
       {while(*(p+i)==k)
   
          for(j=i;j<n;j++)
             *(p+j)=*(p+j+1);}
    p=a;
    my_printf("%d",*p);
    for(i=1;i<n-d;i++)
       my_printf(" %d",*(p+i));
} 
