#define NUM_ITER 1300806

#include <header.h>

int main_bench()
{
	char num[5];
	int i,len;
	my_scanf("%s",num);

	len=strlen(num);
	for(i=len-1;i>=0;i--){
		my_printf("%c",num[i]);
	}
	my_printf("\n");
	return 0;
}
