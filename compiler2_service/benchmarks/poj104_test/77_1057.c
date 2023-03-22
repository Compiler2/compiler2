#define NUM_ITER 1326170

#include <header.h>

int main_bench()
{
	char a[101],c;
	int l,sp=0,i,j=1,b[100];
	gets(a);
	l=strlen(a);
	c=a[0];
	b[0]=0;
	for(i=1;i<l-1;i++)
		if(a[i]==c)
			b[j++]=i;
		else my_printf("%d %d\n",b[--j],i);
	my_printf("0 %d",l-1);

	return 0;
}

