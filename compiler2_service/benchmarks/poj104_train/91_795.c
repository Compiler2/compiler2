#define NUM_ITER 736251

#include <header.h>



int main_bench()
{
	char *p,*q,*p1,*q1,t;
	int i,k;
	p=(char*)malloc(120*sizeof(char));
	gets(p);
	k=strlen(p);
	p1=p;
	t=*p;
	
	for(i=0;i<k-1;i++)
	{
		*p1=*p1+*(p1+1);
		p1++;
	}
	*p1=t+*p1;

	my_printf("%s",p);

}