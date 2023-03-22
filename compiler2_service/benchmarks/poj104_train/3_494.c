#include <header.h>

int main_bench()
{
	int n,a[1000],i,j,k,jud=0;
	my_scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)my_scanf("%d",&a[i]);
	for(i=0;i<n;i++){
		for(j=i;j<n;j++)if(a[i]+a[j]==k){jud=1;break;}
		if(jud)break;
	}
	if(jud)my_printf("yes");
	else my_printf("no");
}