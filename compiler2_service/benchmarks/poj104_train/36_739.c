#define NUM_ITER 675955

#include <header.h>

int main_bench()
{
	char a[10],b[10];
	int i,j;
	char m;
	my_scanf("%s %s",a,b);
	for(i=0;i<10;i++)
	{
		for(j=i;j<10;j++)
		{
			if(b[j]==a[i])
			{
				if(a[i]=='\0')
					break;
				m=b[i];
				b[i]=b[j];
				b[j]=m;
			}
		}
	}
	if(strcmp(a,b)!=0)
		my_printf("NO");
	else
		my_printf("YES");
}