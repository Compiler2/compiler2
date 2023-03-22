#define NUM_ITER 737532

#include <header.h>

int main_bench()
{
	int i,j,flag=1;
	char a[100],b[100];
	my_scanf("%s",a);
	my_scanf("%s",b);
	for(i=0;i<strlen(a);i++)
	{
		for(j=0;j<strlen(b);j++)
		{
           if(a[i]==b[j])
		   {
			   a[i]=' ';
			   b[j]=' ';
		   }
		}
	}
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]!=' ')
		{
			flag=0;
			break;
		}
	}
	for(j=0;j<strlen(b);j++)
	{
		if(b[j]!=' ')
		{
			flag=0;
			break;
		}
	}
	if(flag)
	{
		my_printf("YES\n");
	}
	else my_printf("NO\n");
	return 0;
}