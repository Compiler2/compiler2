#define NUM_ITER 401064

#include <header.h>


int main_bench()
{
    int c,std,a=0,i=0,flag=1;
    int boy[100]={0};
    while((c=getchar())!='\n')
    {    if(flag==1)
	{
		std=c;
		flag=0;
	}
	if(c==std)
	{
		boy[i]=a;
		i++;
	}
	else
	{
		my_printf("%d %d\n",boy[--i],a);
	}
	a++;
    }
	return 0;
}