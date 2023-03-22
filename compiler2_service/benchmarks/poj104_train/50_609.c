#define NUM_ITER 618408

#include <header.h>

int main_bench()
{
	int i,w,a[11]={31,28,31,30,31,30,31,31,30,31,30};
    int t=0;
    my_scanf("%d",&w);
    if(w==7)
	{
		my_printf("%d\n%d\n",1,10);
	}
    else
	{
		for(i=0;i<11;i++)
		{
			t+=a[i];
	        if((t%7+w)%7==0)
				my_printf("%d\n",i+2);
		}
	}
	return 0;
}
