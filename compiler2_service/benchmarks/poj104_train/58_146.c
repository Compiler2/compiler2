#define NUM_ITER 34904

#include <header.h>

int main_bench()
{
	int n;
		int k;
			char a[81];
			my_scanf("%d",&n);
			getchar();
	for(int i=0;i<n;i++)
	{
        k=1;
		gets(a);
		if(a[0]<='9'&&a[0]>='0')
		{
			my_printf("%d\n",k-1);
			continue;
		}
		for(int j=0;a[j]!='\0';j++)
		{
			if((a[j]<='z'&&a[j]>='a')||(a[j]<='Z'&&a[j]>='A')||(a[j]=='_')||(a[j]<='9'&&a[j]>='0'))
			{}
			else
			{
				k--;
				my_printf("%d\n",k);
				break;
			}

		}
        if(k==1)
		my_printf("%d\n",k);
	}
	return 0;
}
