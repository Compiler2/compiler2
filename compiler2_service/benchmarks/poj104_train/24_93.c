#define NUM_ITER 1650910

#include <header.h>

int main_bench()
{
	char word[50][20];
	int max,min,c,total,flag,i;
	flag=0;
	i=0;
	while ((c=my_scanf("%s",word[i]))==1) i++; 
	total=i;
	max=min=0;
	for (i=0;i<=total-1;i++)
	{
		if (strlen(word[i])>strlen(word[max])) max=i;
		if (strlen(word[i])<strlen(word[min])) min=i;
	}
	my_printf("%s\n%s",word[max],word[min]);
}