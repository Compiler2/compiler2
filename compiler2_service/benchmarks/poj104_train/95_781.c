#define NUM_ITER 877589

#include <header.h>

int main_bench()
{
	int i;
	char a[81],b[81];
	gets(a);
	gets(b);
	for (i=0;i<=strlen(a)-1;i++)
		if (a[i]>=65 && a[i]<=90) a[i]+=32;
	for (i=0;i<=strlen(b)-1;i++)
		if (b[i]>=65 && b[i]<=90) b[i]+=32;
	if (strcmp(a,b)>0) my_printf(">");
	if (strcmp(a,b)<0) my_printf("<");
	if (strcmp(a,b)==0) my_printf("=");

}