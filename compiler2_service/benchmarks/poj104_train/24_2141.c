#define NUM_ITER 27111

#include <header.h>

int main_bench()
{
	int i;
	char a[20],b[20],c[20],d;
	my_scanf("%s",&a);
	strcpy(b,a);
	strcpy(c,a);
	for(i=1;i<=100;i++)
	{
		d=getchar();
		if(d=='\n')
			break;
		else
			my_scanf("%s",&a);
			if(strlen(a)>strlen(b))
				strcpy(b,a);
			if(strlen(a)<strlen(c))
				strcpy(c,a);
	}
	my_printf("%s\n%s\n",b,c);
}