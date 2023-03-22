#define NUM_ITER 34417

#include <header.h>

int main_bench()
{
 	int n,s[2]={0};
 	my_scanf("%d",&n);
 	while(n--)
 	{
		int a,b;
		my_scanf("%d %d",&a,&b);
		if(a==0&&b==1)	s[0]++;
		if(a==1&&b==2)	s[0]++;
		if(a==2&&b==0)	s[0]++;
		if(b==0&&a==1)	s[1]++;
		if(b==1&&a==2)	s[1]++;
		if(b==2&&a==0)	s[1]++;
	}
 	if(s[0]==s[1])	my_printf("Tie\n");
 	else if(s[0]>s[1])	my_printf("A\n");
 	else	my_printf("B\n");
	}
