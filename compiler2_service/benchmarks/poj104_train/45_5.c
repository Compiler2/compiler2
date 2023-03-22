#include <header.h>

int main_bench()
{
	char a[51],b[51];
	int a1,b1,i,j,m;
	my_scanf("%s",a);
	my_scanf("%s",b);
	a1=strlen(a);
	b1=strlen(b);
	for(i=0;i<b1;i++)
	{
		m=0;
		for(j=0;j<a1;j++)
		{
			if((int)a[j]==(int)b[i+j])
			{
				m+=1;
			}
		}
		if(m==a1)
		{
			my_printf("%d",i);
			break;
		}
	}
	return 0;
}