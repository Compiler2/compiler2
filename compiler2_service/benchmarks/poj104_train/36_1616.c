#define NUM_ITER 1189610

#include <header.h>

int main_bench()
{
	static char a[100],b[100];
	int i,j,k=1;
	my_scanf("%s%s",a,b);
	for(i=0;a[i]!=0;i++)
	{
		for(j=0;b[j]!=0;j++)
		if(b[j]==a[i])
		{
			b[j]=1;
			break;
			}
		if(b[j]==0)
		{k=0;break;}
		}
	for(j=0;b[j]!=0;j++)
		if(b[j]!=1)
		k=0;
	if(k)
	my_printf("YES");
	else my_printf("NO");
}