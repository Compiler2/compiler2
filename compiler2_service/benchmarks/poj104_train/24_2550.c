#define NUM_ITER 35196

#include <header.h>

int main_bench()
{
	char a[200],b[200],c[200];
	int n,i,max,min;
    my_scanf("%d",&n);
	my_scanf("%s",a);
		strcpy(b,a);
		strcpy(c,a);
	for(i=0;i<n-1;i++)
	{
	  my_scanf("%s",a);
	  if(strlen(a)>strlen(b))
		  strcpy(b,a);
	  if(strlen(a)<strlen(c))
		  strcpy(c,a);
	}
    my_printf("%s\n",b);
	my_printf("%s\n",c);
	return 0;
}