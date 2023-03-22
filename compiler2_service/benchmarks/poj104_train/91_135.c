#define NUM_ITER 1265501

#include <header.h>

int main_bench()
{
	char str[101], fri[101]={'\0'}, *pca, *pcb;
	int n, i;
	gets(str);
	n=strlen(str);
	if(n>=2 && n<=100)
	{
		for(pca=str, pcb=str+1, i=0; pca<(str+n-1); pca++, pcb++, i++)
			fri[i]=*pca + *pcb;
		fri[n-1]=str[0]+str[n-1];
		my_printf("%s\n",fri);
	}
}