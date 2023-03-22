#include <header.h>

int main_bench()
{
	char a[200],b[200];
	my_scanf("%s %s",a,b);
	int x,y;
         x=strlen(a);
         y=strlen(b);
	int i,j;
         char t;
	if(x!=y) my_printf("NO");
	else
	{
		for (i=0;i<x;i++)
			for(j=i+1;j<x;j++)
			{
				if(a[i]<a[j])
				{
					t=a[i];a[i]=a[j];a[j]=t;
				}
			}
		for (i=0;i<y;i++)
			for(j=i+1;j<y;j++)
			{
				if(b[i]<b[j])
				{
					t=b[i];b[i]=b[j];b[j]=t;
				}
			}
		if (strcmp(a,b)==0) my_printf("YES");
		else my_printf("NO");
	}
	return 0;
}