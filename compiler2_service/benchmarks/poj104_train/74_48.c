#include <header.h>

int main_bench()
{int m,n,i,f,j,k,a,b,sum,g=0,h=0;
 my_scanf("%d %d",&m,&n);
 for(i=m;i<=n;i++)
 {f=0;sum=0;
  for(j=2;j<i;j++)
  {if(i%j==0) {f=1;break;}}
  if(f==0) 
  {for(k=i;k>0;k=k/10)
   {b=k%10;
    sum=sum*10+b;
	 }
    if(sum==i&&g==1) my_printf(",%d",i);
    if(sum==i&&g==0) {my_printf("%d",i);h=1;g=1;}
	}
	}
   if(h==0) my_printf("no");
}