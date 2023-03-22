#define NUM_ITER 396384

#include <header.h>

int main_bench()
{
    int a,b,c,d,e,f;
    int reverse(int a);
    my_scanf("%d",&a);
    my_scanf("%d",&b);
    my_scanf("%d",&c);
    my_scanf("%d",&d);
    my_scanf("%d",&e);
    my_scanf("%d",&f);
    a=reverse(a);
    b=reverse(b);
    c=reverse(c);
    d=reverse(d);
    e=reverse(e);
    f=reverse(f);
    my_printf("%d\n",a);
    my_printf("%d\n",b);
    my_printf("%d\n",c);
    my_printf("%d\n",d);
    my_printf("%d\n",e);
    my_printf("%d\n",f);
}
int reverse(int a)
{
	int b[10];
	int i=0,j;
	if(a>0)
	{
	while(a>0)
    {
    	b[i]=a%10;
    	a=(a-b[i])/10;
    	i=i+1;
    }
    for(j=0;j<i;j++)
    {
    	a=a*10+b[j];
    }
	}
	else if(a==0)a=0;
	else if(a<0)
	{
	a=-a;
	while(a>0)
    {
    	b[i]=a%10;
    	a=(a-b[i])/10;
    	i=i+1;
    }
    for(j=0;j<i;j++)
    {
    	a=a*10+b[j];
    }
    a=-a;
	}
    return (a);
}