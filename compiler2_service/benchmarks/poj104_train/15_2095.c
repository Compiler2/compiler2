#define NUM_ITER 640

#include <header.h>

int main_bench()
{
	int a,i,j,b,x,p=0,q;
	my_scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		for(x=0,j=1;j<=a;j++)
		{
			my_scanf("%d",&b);
			if(b==0) x=x+1;
			else x=x+0;
		}
		if(x!=0) {p++;q=x;}
	}
    my_printf("%d",(p-2)*(q-2));
	return 0;
}