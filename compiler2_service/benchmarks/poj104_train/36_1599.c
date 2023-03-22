#define NUM_ITER 3051

#include <header.h>


int order(char *x,int l)
{
	if(l==1)	return 0;
	int i,y;
	for(i=0;i<l-1;i++)
	{
		if(*(x+i)>*(x+i+1))
		{
			y=*(x+i);
			*(x+i)=*(x+i+1);
			*(x+i+1)=y;
		}
	}
	return order(x,l-1);
}

int main_bench()
{
	char x[300]={0},y[300]={0},c;
	char *px,*py;
	int i,lx,ly;
	px=x;py=y;
	for(i=0;(c=getchar())!=' ';i++)
	{
		x[i]=c;
	}
	lx=i;
	for(i=0;(c=getchar())!='\n';i++)
	{
		y[i]=c;
	}
	ly=i;
	order(px,lx);
	order(py,ly);
	for(i=0;i<lx||i<ly;i++)
	{
		if(x[i]!=y[i])
		{
			my_printf("NO\n");
			return 0;
		}
	}
	my_printf("YES\n");
	return 0;
}