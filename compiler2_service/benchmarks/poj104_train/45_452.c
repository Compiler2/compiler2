#define NUM_ITER 1053706

#include <header.h>

int main_bench()
{
	char *pb,*pa;
	char a[50],b[50];
	int i,j,k=0;
	 my_scanf("%s %s",a,b);
	 i=strlen(a); 
	 j=strlen(b);
	pa=a;
     for (pb=b;pb<b+j;pb++)
	{ k++;
		if (*pa!=*pb) continue;
		else  pa++;
		if (*pa==a[i])break;}
		my_printf("%d",k-i);
}
