#define NUM_ITER 1114769

#include <header.h>



int main_bench()
{
	char a[50],b[50];
	int i,j,n1,n2;
	my_scanf("%s",&a);
	my_scanf("%s",&b);
	n1=strlen(a);
	n2=strlen(b);
	for(i=0;i<n2;i++)
	{
		if(b[i]==a[0])
		{
			for(j=0;j<n1;j++)
			{
				if(b[i+j]!=a[j])
					break;
			}
			if(j==n1&&b[i+j-1]==a[j-1])
			{
				my_printf("%d\n",i);
				break;
			}
		}
	}

	return 0;
}