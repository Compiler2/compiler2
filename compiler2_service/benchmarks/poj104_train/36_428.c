#define NUM_ITER 89298

#include <header.h>

int main_bench()
{
	char a[500],b[500];
	int i,x,j=0,k=0,m=0;
	for(i=0;((a[i]=getchar())!=' ');i++)
		j++;
	for(i=0;((b[i]=getchar())!='\n');i++)
		k++;
	if(j!=k)
		my_printf("NO");
	else
	{
		for(i=0;i<j;i++)
			for(x=0;x<j;x++)
				if(b[x]==a[i])
				{
					b[x]='0';
					break;
				}
		for(i=0;i<j;i++)
			if(b[x]=='0')
			m++;
	if(m==j)
		my_printf("YES");
	else
	my_printf("NO");		
	}
}