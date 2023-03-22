#define NUM_ITER 11750

#include <header.h>

int main_bench()
{
	int n,length_a,length_b,i,j,k;
	char a[128],b[128];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s",a);
		my_scanf("%s",b);
		length_a=strlen(a);
		length_b=strlen(b);
		for(j=length_a;(length_a-j)<length_b;j--)
		{
			if (a[j-1]>=b[length_b-1+j-length_a])
				a[j-1]=a[j-1]-b[length_b+j-length_a-1]+48;
			else
			{
					a[j-1]=a[j-1]+10-b[length_b+j-length_a-1]+48;
					k=j-2;
					while(a[k]=='0')
					{
						a[k]='9';
						k--;
					}
					a[k]--;
			}
		}
		k=0;
		while(a[k]=='0')
			k++;
		for(;k<length_a;k++)
			putchar(a[k]);
		putchar('\n');
	}
	return 0;
}