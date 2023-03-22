#define NUM_ITER 3117

#include <header.h>

int work(int now,int x)
{
	int i,j,swap;
	int a[1002];
	for (i=1;i<=x;i++){
		my_scanf("%d",&a[i]);
	}
	for (i=1;i<=x;i++){
		for(j=i+1;j<=x;j++){
			if (a[i]>a[j]) {
				swap=a[i];a[i]=a[j];a[j]=swap;
			}
		}
	}
	if (now==2) my_printf(" ");
	my_printf("%d",a[1]);
	for (i=2;i<=x;i++){
		my_printf(" %d",a[i]);
	}
	return(0);
}
int main_bench()
{ 
	int n,m;
	my_scanf("%d%d",&n,&m);
    work(1,n);
	work(2,m);
	return(0);
}
