#include <header.h>

int main_bench()
{
	int i,m,j,b,k;
	char c1[50],c2[50];
	my_scanf("%s %s",c2,c1);
	for(i=0;c1[i]!='\0';i++)
	{
		k=i;
		for(j=0;c2[j]!='\0';j++)
		{
			if(c1[k]!=c2[j])
			{
				m=0;
				break;
			}
			k=k+1;
			m=1;
		}
		if(m==1)break;
	}
	b=k-j;
	my_printf("%d",b);
	return 0;
}