#define NUM_ITER 615183

#include <header.h>

int compare(const void*a,const void*b)
{	return *(char*)a-*(char*)b;}
int main_bench()
{	int sum;
char a[100]={'\0'},b[100]={'\0'};

	
	my_scanf("%s %s",a,b);
	qsort(a,strlen(a),sizeof(char),compare);
	qsort(b,strlen(b),sizeof(char),compare);
	sum=0;
	if(strcmp(a,b)!=0)
		{	sum=sum+1;
		}

	if(sum>0)
	{	my_printf("NO");
	}
	if(sum==0)
	{	my_printf("YES");
	}

	return 0;
}