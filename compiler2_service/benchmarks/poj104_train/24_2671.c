#include <header.h>

int main_bench()
{
	int n;
	char c[201][40]={0};
    my_scanf("%d", &n);
	int i,b[201]={0};
    for(i=0;i<n;i++)
	{
		my_scanf("%s", c[i]);
		getchar();
	}
	
    int num,q=0;
	int z,x=0,y=30;
    for(z=0;z<n;z++)
	{
		b[z]=strlen(c[z]);
		
	    if(b[z]>=x)
			x=b[z];
		if(b[z]<=y)
			y=b[z];
		
	}
    for(z=0;z<n;z++)
	{
		if(b[z]==x)
		{
			my_printf("%s\n", c[z]);
			break;
		}
	}
	for(z=0;z<n;z++)
	{
		if(b[z]==y)
		{
			my_printf("%s", c[z]);
			break;
		}
	}
}