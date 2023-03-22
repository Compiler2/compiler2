#define NUM_ITER 32899

#include <header.h>

int main_bench()
{
	char c[100];
	int n, i, j, f;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		f=0;
		my_scanf("%s",c);
		if(c[0]>='0'&&c[0]<='9')
			f=1;
		else
			for(j=0;c[j]!=0;j++)
			{
				if((c[j]<'a'&&c[j]>'Z'||c[j]>'z'||c[j]<'A'&&c[j]>'9'||c[j]<'0')&&c[j]!='_')
					f=1;
			}
		if(f)
			my_printf("no\n");
		else
			my_printf("yes\n");
		
	}
	return 0;
}