#define NUM_ITER 10693

#include <header.h>

int main_bench()
{
	int m,n,x,y,a,b,c,d,e,i,total1=0,hu=0;
	long int total2=0;
	char name[20],j[20],ch1,ch2;
	my_scanf("%d\n",&x);
	for(i=1;i<=x;i++)
	{
		my_scanf("%s %d %d %c %c %d",name,&m,&n,&ch1,&ch2,&y);
		if(m>80&&y>=1)
			a=8000;
		else a=0;
		if(m>85&&n>80)
			b=4000;
		else b=0;
		if(m>90)
			c=2000;
		else c=0;
		if(m>85&&ch2=='Y')
			d=1000;
		else d= 0;
		if(n>80&&ch1=='Y')
			e=850;
		else e= 0;
		total1=a+b+c+d+e;
		if(total1>hu)
		{	
			hu=total1;
			strcpy(j,name);
		}
		total2+=total1;
	}
    my_printf("%s\n%d\n%ld\n",j,hu,total2);
}
