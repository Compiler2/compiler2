#define NUM_ITER 34

#include <header.h>

int main_bench()
{
   int jvzhen();
   int n,i,a;
   my_scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       a = jvzhen();
       my_printf("%d\n",a);
   }
   
 

return 0;
}
int jvzhen()
{
    int m,n,i,j,sum;
    sum=0;
    my_scanf("%d %d",&m,&n);
    int b[100][100];
    for(i=1;i<=m;i++)
    {
      for(j=1;j<=n;j++) my_scanf("%d",*(b+i)+j);
    }
   
    for(i=1;i<=n;i++) 
		sum=sum+*(*(b+1)+i);
    if(m>1){for(i=1;i<=n;i++) 
		sum=sum+*(*(b+m)+i);}
    if(m>2)
    { for(j=2;j<m;j++) 
		sum=sum+*(*(b+j)+1)+*(*(b+j)+n);
    }
    return(sum);
}
