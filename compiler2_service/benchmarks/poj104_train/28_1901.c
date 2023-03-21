#include <header.h>

int main_bench()
{
	char e[50];
	int a;
	scanf("%s",e);
	printf("%d",strlen(e));
	while(scanf("%s",e) == 1){
		printf(",%d",strlen(e));
	}
	return 0;
}