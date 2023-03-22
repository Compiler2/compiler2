#define NUM_ITER 1078743

#include <header.h>

int main_bench()
{
	int m,n,i,x[1000],count=0;
	my_scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
	{
		if(f(i)*g(i)==1)
		{count++;
		x[count]=i;
		}		
	}
	if(count==0) my_printf("no");
	if(count==1) my_printf("%d",x[1]);
	if(count>=2)
	{
		for(i=1;i<count;i++)
			my_printf("%d,",x[i]);
		my_printf("%d",x[count]);
	}
}

int f (int a)
{   int b,c,temp=0;
	if(a==2) return 1;
	b=a/2;
	for(c=2;c<=b;c++)
	{
		if(a%c==0)
		{temp=1;
		break;}
	}
	if(temp==0) return 1;
	if(temp==1) return 0;
}

int g(int a)
{ int b=0,d[100],i,temp=0;
   for(i=0; ;i++)
   {b++;
   d[i]=a%10;
   a=a/10;
   if(a==0) break;
   }
   for(i=0;i<b;i++)
   {
	if(d[i]!=d[b-1-i])
   
	{
		temp=1;
		break;
	}
   }
   if(temp==1) return 0;
   if(temp==0) return 1;
}



	

