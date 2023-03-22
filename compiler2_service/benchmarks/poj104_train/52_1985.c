#include <header.h>

void diaohuan(int *a,int m,int n);
main_bench()	
{
	int m,n,i,a[10000];
	my_scanf("%d%d",&n,&m);
	for(i=0;i<n;i++) my_scanf("%d",&a[i]);
	diaohuan(a,m,n);
	my_printf("%d",a[0]);
         for(i=1;i<n;i++) my_printf(" %d",a[i]);
}
void diaohuan(int *a,int m,int n)
{
	int *i;	
	for(i=a;i<a+n-m;i++) *(i+n)=*i;
	for(i=a;i<a+n;i++) *i=*(i+n-m);
}
