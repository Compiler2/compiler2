#define NUM_ITER 979015

#include <header.h>


int min(int x,int y)
{
	if(x>y) return y;
	else return x;
}

int main_bench()
{
	char a[80],b[80];
	int x,y,i,z;
	gets(a);
	x=strlen(a);
	gets(b);
	y=strlen(b);
	z=min(x,y);
	for(i=0;i<x;i++)
	{
		if ((a[i]>='a')&&(a[i]<='z'))
			a[i]=a[i]-32;
		if ((b[i]>='a')&&(b[i]<='z'))
			b[i]=b[i]-32;
	}
	for(i=0;i<x;i++)
	{
		if ((a[i]>b[i])&&(a[i]-b[i]!=32))
		{
			my_printf(">");
			break;
		}
		else if((a[i]<b[i])&&(b[i]-a[i]!=32))
		{    
			my_printf("<");
			break;
		}
		if (i==x-1) my_printf("=");
	}
	return 0;
}

