#define NUM_ITER 870445

#include <header.h>


int main_bench()
{
	char a[100],b[100];
	int ans,e,lena,lenb,k,i;
	my_scanf("%s%s",a,b);
	lena=strlen(a);
	lenb=strlen(b);
	if(lena!=lenb)
		my_printf("NO");
	else
	{
		for(k=1;k<lena;k++)
		{
			for(i=0;i<lena-k;i++)
			{
				if(a[i]>a[i+1])
				{
					e=a[i+1];
					a[i+1]=a[i];
					a[i]=e;
				}
			}
		}
		for(k=1;k<lenb;k++)
		{
			for(i=0;i<lenb-k;i++)
			{
				if(b[i]>b[i+1])
				{
					e=b[i+1];
					b[i+1]=b[i];
					b[i]=e;
				}
			}
		}
		ans=strcmp(a,b);
		if(ans==0)
			my_printf("YES");
		else
			my_printf("NO");
	}
}
