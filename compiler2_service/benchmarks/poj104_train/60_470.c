#define NUM_ITER 9881

#include <header.h>

int main_bench()
{     int f(int n);
	int n,i,a[100000]={0},count=0,c;
   my_scanf("%d",&n);
   if(n==1||n==2||n==3||n==4)
	   my_printf("empty");
    else
	{for(i=3;i<=n;i++)
	{c=f(i);
	if(c)
	{a[count]=i;
	count++;
	}
	}
	}
	for(i=0;i<count;i++)
		if(a[i+1]-a[i]==2)
			my_printf("%d %d\n",a[i],a[i+1]);
		return 0;
	}
   int f(int n)
   {int i;
    for(i=2;i<n;i++)
		if(n%i==0)
		{return 0;break;}
     if(i>=n)
		 return 1;
   }