#define NUM_ITER 1287001

#include <header.h>

int main_bench()
{
	char pupils[100],g;
	int i=0,j,k;
	gets(pupils);
	k=strlen(pupils);
	g=pupils[k-1];
	while (i<k)
	{
		if (pupils[i]==g)
		{
			j=1;
			while (pupils[i-j]==0) j++;
			pupils[i]=0;
			pupils[i-j]=0;
			my_printf("%d %d\n",i-j,i);
		}
		i++;
	}
}