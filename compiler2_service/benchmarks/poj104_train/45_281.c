#define NUM_ITER 1091077

#include <header.h>

int main_bench()
{
	char a[50],b[50];
	int i,j,k=0,l,x,y;
	my_scanf("%s %s",a,b);
	x=strlen(a);
	y=strlen(b);
	for(i=0;i<=(y-x);i++)
		if(b[i]=a[0])
		{   l=1;
		    k=i;
			for(j=i+1;l<x;j++,l++)
				if(a[l]!=b[j])
				{
					k=0;
					break;
				}
            if(l==x)
			{
				my_printf("%d",k);
				break;
			}
		}
}