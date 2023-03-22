#include <header.h>

int main_bench()
{
    int a,r,i;
    my_scanf("%d",&a);
    r=0;
	i=0;
    while(a>0)
    {
        r=r*10+a%10;
		i=i+!(a%10);
        a=a/10;
    }
	switch(i)
	{
	case 0:
		my_printf("%d\n",r);break;
	case 1:
		my_printf("0%d\n",r);break;
	case 2:
		my_printf("00%d\n",r);break;
	case 3:
		my_printf("000%d\n",r);break;
	case 4:
		my_printf("0000%d\n",r);break;
	}
    return 0;
}

