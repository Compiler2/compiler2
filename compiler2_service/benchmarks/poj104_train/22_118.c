#define NUM_ITER 243912

#include <header.h>

int main_bench()
{
	int i,j,a[300],m1=0,m2=-129;
	my_scanf("%d",&a[0]);
	for(i=1;;i++)
	{  
		if(getchar()=='\n') break;
		my_scanf("%d",&a[i]);
	}
	if(i==1) my_printf("No");
	else
	{
		for(j=0;j<i;j++) if(m1<a[j]) m1=a[j];
		for(j=0;j<i;j++)
		{
			if(m2<a[j] && a[j]!=m1) 
				m2=a[j];
		}
		if(m2==-129) my_printf("No");
		else my_printf("%d",m2);
	}
}