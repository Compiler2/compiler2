#define NUM_ITER 1049467

#include <header.h>

int main_bench() 
{ 
	int a,temp,p,q; 
	my_scanf("%d",&a); 
	temp=a; 
	if(a!=0)
	{while(temp%10-temp!=0||(temp%10-temp==0&&q>=10)) 
	{ 
		p=temp%10; 
		my_printf("%d",p); 
		q=temp;
		temp=temp/10; 
	}
	}
	else
		my_printf("0");
	my_printf("\n");
}