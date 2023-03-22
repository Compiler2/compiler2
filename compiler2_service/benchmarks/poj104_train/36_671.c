#define NUM_ITER 742906

#include <header.h>

int main_bench()
{
	char a[100],b[100];
	unsigned int i,j,t,s=1;
	my_scanf("%s%s",a,b);
	if(strlen(a)!=strlen(b))my_printf("NO");
	else
	{
		for(i=0;i<strlen(a);i++)
		{
			t=0;
			for(j=0;j<strlen(b);j++)
			if(a[i]==b[j])
			{
				b[j]=1;
				t=1;
				break;
			}
			if(t==0)s=0;
		}
	
	if (s)my_printf("YES");
	else my_printf("NO");}
}
