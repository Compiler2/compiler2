#define NUM_ITER 1215576

#include <header.h>

main_bench()
{
	char a[10000];
	int i,x=0;
	gets(a);
	for(i=0;i<20000;i++)
	{
		if(a[i]!=' '&&a[i]!='\0') x=x+1;
		if(a[i]==' ')
		{
			if(x!=0) my_printf("%d,",x);
			x=0;
		}
		if(a[i]=='\0')
		{
			if(x!=0) my_printf("%d",x);
			break;
		}
	}
}