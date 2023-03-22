#define NUM_ITER 1588285

#include <header.h>

main_bench()
{
	char line[6];
	int i,j,k;
	my_scanf("%s",line);
	for(i=0,k=0;line[i]!='\0';i++)
		k=k+1;
	for(j=k-1;j>=0;j--)
		my_printf("%c",line[j]);
}
