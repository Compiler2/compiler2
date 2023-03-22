#define NUM_ITER 1699450

#include <header.h>

int main_bench()
{
	int a,i,m,e,f;
	m=0;
	my_scanf("%d",&a);
	for(i=3;i<8;i=i+2)
	{
		if (a%i==0)
		{	m=m+1;
		  if (m==1)
		  e=i;
		  else
			f=i;
		}

	}
	switch (m){
	case 0:
		my_printf("n");break;
	case 1:
		my_printf("%d",e);break;
	case 2:
        my_printf("%d %d",e,f);break;
	case 3:
		my_printf("3 5 7");break;
	}
	return 0;
}