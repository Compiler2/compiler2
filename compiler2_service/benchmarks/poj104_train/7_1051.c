#include <header.h>

int main_bench()
{
	char a[256],b[256],c[256];
	my_scanf("%s",a);
	my_scanf("%s",b);
	my_scanf("%s",c);
	int lenth1,lenth2,i,j,t;
	lenth1=strlen(a);
	lenth2=strlen(b);
	for(i=0;i<=lenth1-1;i++)
	{
		t=i;
		for(j=0;j<=lenth2-1;)
		{
			
			if(a[t]==b[j])
			{
				t=t+1;
				j=j+1;
				
			}
			else
				break;

		}
		if(j==lenth2)
			break;
	}
	for(j=0;j<lenth2;j++,i++)
		a[i]=c[j];
	for(i=0;i<lenth1;i++)
	my_printf("%c",a[i]);
}