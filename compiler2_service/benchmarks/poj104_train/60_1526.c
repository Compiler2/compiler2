#include <header.h>

int main_bench()
{
	int j,k,i,m,n;
	int s[30000]={0};
    my_scanf("%d",&n);
    
    for (i=2;i<=n;i++)
    {
        k=0;
    for (j=2;j<i;j++)
    if (i%j==0) 
    {
              k=1 ;
              break;
              }
  if (k==0) s[i]=1;              
}
  k=0;
 for (i=1;i<=n;i++) if ((s[i]==1)&&(s[i+2]==1)) 
 {
     k=1;
     my_printf("%d %d\n",i,i+2);
     }
     if (k==0) my_printf("empty");

return 0;
}
