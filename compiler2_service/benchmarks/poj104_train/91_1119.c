#define NUM_ITER 1491323

#include <header.h>



int main_bench()
{
	char sz[101],fri[101];
	int i;
	gets(sz);
	for(i=0;sz[i+1]!='\0';i++){
		fri[i]=sz[i]+sz[i+1];
	}
	fri[i]=sz[i]+sz[0];
	fri[i+1]='\0';
	puts(fri);
	return 0;
}