#define NUM_ITER 272760

#include <header.h>

int main_bench()
{
	int a[301]={0},i=0,j,max,max2=0;
	char c;
	my_scanf("%d",&a[0]);
	max=a[0];

	while((c=getchar())!='\n')
	{
		my_scanf("%d",&a[++i]);
		
		if(max<a[i]){max2=max;max=a[i];}
		else if(max2<a[i]&&a[i]!=max)max2=a[i];
	}
	if(max>max2&&max2!=0)my_printf("%d\n",max2);
	else my_printf("No\n");
}