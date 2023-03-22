#include <header.h>

int main_bench()
{	int sushu(int k);
	int huiwen(int number);
	int m,n,i,t,s=0;
	my_scanf("%d",&m);
	my_scanf("%d",&n);
	t=m;
	for(i=t;i<=n;i++)
		if(sushu(i)==1&&huiwen(i)==1) {my_printf("%d",i);t=i;s++;break;}
	for(i=t+1;i<=n;i++)
		if(sushu(i)==1&&huiwen(i)==1) my_printf(",%d",i);
	if(s==0) my_printf("no");	 
}
int sushu(int k)
{    int s;
     for(s=2;s<=k;s++)
	    if(k%s==0) break;
	 if(k==s) return(1);
	 else return(0);
}	
int huiwen(int number)
{	int num,sum=0,a;
	num=number;
	for( ;num!=0; )
		{a=num%10;
		 num=num/10;
		sum=sum*10+a;
		}
	if(sum==number) return(1);
	else return(0);
}