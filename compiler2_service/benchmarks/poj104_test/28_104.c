#define NUM_ITER 14807

#include <header.h>

int main_bench()
{	char c[300][20]={{'\0'}};
	int i;
	my_scanf("%s",c[0]);
	for(i=1;getchar()!='\n';i++)
		my_scanf("%s",c[i]);
	my_printf("%d",strlen(c[0]));
	for(i=1;c[i][0]!='\0';i++)	
	my_printf(",%d",strlen(c[i]));
}