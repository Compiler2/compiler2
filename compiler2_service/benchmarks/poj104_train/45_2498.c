#include <header.h>

int main_bench()
{
	char a[100],b[1003],c[100];
	my_scanf("%s%s",a,b);
	int i,j,num=0,k=-1;
	for(i=0;a[i]!='\0';i++)
	{
		num=num+1;
	}
	for(i=0;a[i]!='\0';i++)
	{
		for(j=0;b[j]!='\n';j++)
		{
			if(a[i]==b[j])
				break;
				
			
		}
		my_printf("%d",j);
		break;
	}
	for(i=j;i<=num+j;i++)
	{	k=k+1;
		c[k]==b[i];
	
	}
	if(strcmp(a,c)==0)
		my_printf("%d",j);


	
	return 0;


}