#define NUM_ITER 23497

#include <header.h>

int main_bench()
{
	int n,k;
	my_scanf("%d",&n);
	for(k=0;k<=n;k++)
	{
		char zifuchuan[10000];
		gets(zifuchuan);
		int len;
		len=strlen(zifuchuan);
		int i,j,m=0,p=0,a,b;
		for(i=0;i<len;i++)
		{
			for(j=0;j<len;j++)
			{
				a=(int)zifuchuan[i];
				b=(int)zifuchuan[j];
				if(a==b)
					m++;
			}
			if(m==1)
			{
				my_printf("%c\n",zifuchuan[i]);
				break;
			}
			else if(m!=1)
				p++;
			m=0;
		}
		if(p==len&&p!=0)
		{
			my_printf("no\n");
		}
	}
		
	return 0;
	
}