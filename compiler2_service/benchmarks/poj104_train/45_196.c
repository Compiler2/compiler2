#include <header.h>

int main_bench()
{
	char a[50],b[50];
	my_scanf("%s",a);
	my_scanf("%s",b);
	int i,k,t=1;
	for(k=0;k<=(int)strlen(b);k++)
	{
		for(i=0;i<(int)strlen(a);i++)
           if(a[i]==b[k+i])
				t=1;
			else
			{
				t=0;
				break;
			}
			if(t==1)
			break;
	}
	if(t==0)
		my_printf("0");
	else
		my_printf("%d",k);
    my_printf("\n");
}