#define NUM_ITER 37656

#include <header.h>

int main_bench()
{
	char a[100]={'\0'},b[100]={'\0'};
	int i,j,p=0,x,y;
	for(i=0;i<=100;i++)
	{
		my_scanf("%c",&a[i]);
		if(a[i]==' ')
			break;
	}
	for(i=0;i<=100;i++)
	{
		my_scanf("%c",&b[i]);
		if(b[i]=='\n')
			break;
	}
	x=strlen(a)-1;
	y=strlen(b)-1;
	if(x==y)
		for(i=0;i<=x;i++)
		{
			p=0;
			for(j=0;j<=y;j++)
				if(a[i]==b[j])
				{
					p=1;
					b[j]=' ';
					break;
				}
			if(p==0)
				break;
		}
	if(p==1)
		my_printf("YES");
	else
		my_printf("NO");
	return 0;
}