#define NUM_ITER 52072

#include <header.h>

int main_bench()
{
	char a[50][20],(*p)[20],*p1,*p2;
	int s=0;
	for(p=a;p<a+50;p++)
	{
		my_scanf("%s",*p);
		s++;
		if(getchar()=='\n')
			break;
	}
	p=a;
	p1=p2=*p;
	for(p=a+1;p<a+s;p++)
	{
		p1=strlen(*p)>strlen(p1)?*p:p1;
		p2=strlen(*p)<strlen(p2)?*p:p2;
	}
	my_printf("%s\n",p1);
	my_printf("%s",p2);
	return 0;
}


