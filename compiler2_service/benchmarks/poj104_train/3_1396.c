#include <header.h>

int main_bench()
{
int a[1000];
int n,k,l;
l=0;
my_scanf("%d%d",&n,&k);
int j,e,ok,i;
ok=0;
for(i=0;i<n;i++){
	my_scanf("%d",&a[i]);}
for(i=0;i<n;i++){
	for(j=1;j<n;j++){
		if((a[0]+a[j])==k){ok=1;}
	}
	e=a[0];
	a[0]=a[l];
	a[l]=e;
	l++;
	}
if(ok==1){my_printf("yes");}
else{my_printf("no");}
	return 0;
}
