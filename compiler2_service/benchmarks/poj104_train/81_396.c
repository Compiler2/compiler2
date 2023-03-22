#define NUM_ITER 256508

#include <header.h>

int main_bench()
{
	int a[5][5],m,n,i,*p[5],*t;
	for(i=0;i<5;i++)
	p[i]=a[i];
	for(i=0;i<5;i++)
		my_scanf("%d %d %d %d %d",p[i],p[i]+1,p[i]+2,p[i]+3,p[i]+4);
	my_scanf("%d %d",&n,&m);
	if(n<5&&m<5)
	{
		t=p[n];
		p[n]=p[m];
		p[m]=t;
	    for(i=0;i<5;i++)
		{
			my_printf("%d %d %d %d %d",*p[i],*(p[i]+1),*(p[i]+2),*(p[i]+3),*(p[i]+4));
			if(i<4)my_printf("\n");
		}
	}
	else my_printf("error");
	return 0;
}