#include <header.h>

int main_bench()
{
	int n,a[310],i,j,b[310]={0},*p;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)my_scanf("%d",&a[i]);
	p=b;

	int chong,l=0;
	for(i=0;i<n;i++)
		{chong=0;
		 for(j=0;j<n;j++) if(a[i]==b[j]) chong=1;
		 if(chong);
		 else{*p=a[i];p++;l++;}
		}
	my_printf("%d",b[0]);
	for(i=1;i<l;i++)my_printf(",%d",b[i]);
	my_printf("\n");
}