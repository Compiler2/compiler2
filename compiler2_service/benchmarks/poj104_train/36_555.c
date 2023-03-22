#define NUM_ITER 967231

#include <header.h>

int main_bench()
{
	char a[20],b[20];
	int i,k,j;
	my_scanf("%s %s",a,b);
	k=strlen(a);
	if(k!=strlen(b))
		my_printf("NO");
	else
	{
	for(i=0;i<k;i=i+1)
	{
		for(j=0;j<k;j=j+1)
		{
			if(a[i]==b[j])
			{
				a[i]='0';
				b[j]='0';
				break;
			}
		}
	}
	j=0;
	for(i=0;i<k;i=i+1)
	{
		if(a[i]!='0')
		{
			j=1;
			break;
		}
	}
	if(j==0)
		my_printf("YES");
	else
		my_printf("NO");
	}
}