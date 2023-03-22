#define NUM_ITER 10641

#include <header.h>

int main_bench()
{
	int n,i;
	char a[200]={'0'},b[200]={'0'};
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		char c[200]={'0'};
		int lena,lenb;
		int d,j;
		my_scanf("%s",a);
		my_scanf("%s",b);
		lena=strlen(a);
		lenb=strlen(b);
		d=lena-lenb;
		for(j=lena-1;j>=d;j--)
		{
			b[j]=b[j-d];
			b[j-d]='0';
		}
		for(j=0;j<d;j++) b[j]='0';
		for(j=lena-1;j>=0;j--)
		{
			if(a[j]>=b[j])
				c[j]=a[j]-b[j]+'0';
			else
			{
				c[j]=a[j]-b[j]+10+'0';
				a[j-1]-=1;
			}
		}
		for(j=0;j<lena;j++)
			my_printf("%c",c[j]);
		my_printf("\n");
	}
return 0;
}