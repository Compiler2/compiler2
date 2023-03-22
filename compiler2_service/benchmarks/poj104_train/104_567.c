#define NUM_ITER 841972

#include <header.h>

int main_bench()
{
	int i,j,a,b,x[10],y[10],countx=0,county=0;
	my_scanf("%d%d",&a,&b);
    for(i=0;;i++)
	{
		if(i==0) x[i]=a;
		else x[i]=x[i-1]/2;
    	countx++;
	    if(x[i]==1)
		    break;
	}
    for(i=0;;i++)
	{
		if(i==0) y[i]=b;
		else y[i]=y[i-1]/2;
		county++;
		if(y[i]==1)
			break;
	}
	for(i=0;i<countx;i++)
		for(j=0;j<county;j++)
			if(x[i]==y[j])
			{
				my_printf("%d\n",x[i]);
				return 0;
			}
}