#define NUM_ITER 173

#include <header.h>

int main_bench()
{
    int n,i,j,c,d,t=0;
    my_scanf("%d",&n);
    int a[20000]={0};
    int b[20000]={0};
    for(i=0;i<20000;i++)
    {
      my_scanf("%d %d",&c,&d);
      if((c==0)&&(d==0))
      break;
      a[c]=a[c]-1;
      b[d]=b[d]+1;      
      }
      for(j=0;j<i;j++)
      {
        if((b[j]==(n-1))&&(a[j]==0))
        {my_printf("%d\n",j);t=1;}
        }
        if(t==0)
        my_printf("NOT FOUND");
         
              return 0;
              }   

