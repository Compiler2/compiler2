#define NUM_ITER 920123

#include <header.h>

int main_bench()
{
	int i,j,c=0,t;
	char a[20],b[20];
	char *pa,*pb;
	my_scanf("%s",a);
	my_scanf("%s",b);
	pa=a;
	pb=b;
	t=strlen(a);

	if (strlen(a)!=strlen(b))
		my_printf("NO");
	else{
	for(i=0;i<t;i++)
	{
		for(j=0;j<t;j++)
		{   
			if (*(pa+i)==*(pb+j))c++;
		}
	}

	if (c>=t)
		my_printf("YES\n");
	else my_printf("NO\n");
	}
}
