#define NUM_ITER 898591

#include <header.h>

int main_bench()
{
	int i,pa[58]={0},pb[58]={0};
	char a[100]={0},b[100]={0},*p,*q;
	p=a;q=b;
	my_scanf("%s %s",a,b);
	
	
	for (p=a;*p!='\0';p++)
		pa[*p-'A']++;
	for(q=b;*q!='\0';q++)
		pb[*q-'A']++;
    for(i=0;i<58;i++)
	{
		if(pa[i]!=pb[i])
		{
			my_printf("NO");
			break;
		}
	}
		if(i==58)
			my_printf("YES");
}