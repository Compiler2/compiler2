#define NUM_ITER 742868

#include <header.h>

int main_bench()
{
	char a[10],b[10];
	int numa[130]={0},numb[130]={0},i,flag=1;
	my_scanf("%s %s",&a,&b);
	for(i=0;i<(int)strlen(a);i++)
		numa[a[i]]++;
	for(i=0;i<(int)strlen(b);i++)
		numb[b[i]]++;
	for(i='A';i<'z';i++)
		if(numa[i]!=numb[i])
		{
			flag=0;
			break;
		}
		if(flag)
			my_printf("YES");
		else my_printf("NO");
		return 0;
}