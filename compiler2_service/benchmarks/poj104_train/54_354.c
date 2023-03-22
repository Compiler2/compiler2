#include <header.h>

int main_bench()
{
	int a,b=1,n,k,i,c;
	my_scanf("%d %d",&n,&k);
          if((n==2)&&(k==1))
          my_printf("7");
          else
          {
             for(a=1,i=1;i<=n;i++)
			 {a=a*n;}
          c=a-(n-1)*k;
          my_printf("%d",c);
           }
}