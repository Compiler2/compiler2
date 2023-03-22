#include <header.h>

int main_bench()
{
int n,a[200000],i,j,b,c[101];
my_scanf("%d",&n);
for(i=0;i<101;i++){
	c[i]=0;
}

for(i=0;i<n;i++){
	my_scanf("%d",&a[i]);
	c[a[i]]++;
	if(c[a[i]]==1){
		if(i==0)my_printf("%d",a[0]);
		else my_printf(" %d",a[i]);
	}
}

return 0;
}
