#define NUM_ITER 2226

#include <header.h>

int num_a,num_b,a[2000]={0},b[1000]={0},i,j;
int main_bench()
{
	void a1(),a2(),a3(),a4();
	a1();
	a2();
	a3();
	a4();
}

void a1()
{
	my_scanf("%d%d",&num_a,&num_b);
	for(i=0;i<num_a;i++)
		my_scanf("%d",&a[i]);
	for(i=0;i<num_b;i++)
		my_scanf("%d",&b[i]);
}

void a2()
{
	int turn1;
	for(i=0;i<num_a;i++)
		for(j=i+1;j<num_a;j++)
			if(a[i]>a[j]) 
			{
				turn1=a[i];a[i]=a[j];a[j]=turn1;
			}
	for(i=0;i<num_b;i++)
		for(j=i+1;j<num_b;j++)
			if(b[i]>b[j]) 
			{
				turn1=b[i];b[i]=b[j];b[j]=turn1;
			}
}

void a3()
{
	for(i=0;i<num_b;i++)
		a[num_a+i]=b[i];
}

void a4()
{
	for(i=0;i<num_a+num_b-1;i++)
		my_printf("%d " ,a[i]);
	my_printf("%d\n",a[num_a+num_b-1]);
}
	
