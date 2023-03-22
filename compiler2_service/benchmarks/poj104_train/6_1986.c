#define NUM_ITER 26

#include <header.h>

int main_bench()
{int i,m,n,ii,jj,l,t;
int s[10002]={0};
int *k=s;
int sum=0;
my_scanf("%d",&jj);
for(i=1;i<=jj;i++)
{ my_scanf("%d %d",&m,&n);
   t=m*n;
   for(ii=1;ii<=t;ii++)
     {k=k+1;
   my_scanf("%d",k);
	   if(ii<=n||ii>(m-1)*n||ii%n==1||ii%n==0)
		   sum=sum+*k;
   }
   my_printf("%d\n",sum);
   sum=0;
   k=s;

}
return 0;
}
