#define NUM_ITER 40744

#include <header.h>

int main_bench()
{int n,*p,i=0,*q;
 my_scanf("%d",&n);
 p=(int*)malloc(sizeof(int)*n);
 q=(int*)malloc(sizeof(int)*n);
 for(i=0;i<n;i++)
 {my_scanf("%d",&p[i]);
 }
 for(i=0;i<n;i++)
 {*(q+n-i-1)=*(p+i);
 }
 for(i=0;i<n-1;i++)
 {my_printf("%d ",q[i]);
 }
 if (i==n-1)
 my_printf("%d",q[i]);
}