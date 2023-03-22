#define NUM_ITER 35912

#include <header.h>

int n,len,tot;
char a[1000][50];
void fill(int p);
int main_bench()
{
	int i,j;
	my_scanf("%d",&n);
	for (i=0;i<n;i++)
		my_scanf("%s",&a[i]);
	my_printf("%s",a[0]);
	tot=strlen(a[0]);
	for (i=1;i<n;i++)
	{
		len=strlen(a[i]);
	    if (tot+len+1<=80)
		{
			my_printf(" %s",a[i]);
			tot+=len+1;
		}
		else
		{
			my_printf("\n");
			my_printf("%s",a[i]);
			tot=len;
		}
	}
}
