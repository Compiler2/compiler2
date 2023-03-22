#define NUM_ITER 2898

#include <header.h>

int n,m,a[100]={0},b[100]={0},c[200]={0};
void duqu()
{
	int *p;
	my_scanf("%d %d",&m,&n);
	for(p=a;p<a+m;p++)
		my_scanf("%d",p);
	for(p=b;p<b+n;p++)
		my_scanf("%d",p);
}
void range(int a[],int b[],int m,int n)
{
	int *p,*q,d;
	for(p=a;p<a+m-1;p++)
		for(q=p+1;q<a+m;q++)
			if(*p>*q)
			{
				d=*p;
				*p=*q;
				*q=d;
			}
		for(p=b;p<b+n-1;p++)
			for(q=p+1;q<b+n;q++)
			if(*p>*q)
			{
				d=*p;
				*p=*q;
				*q=d;
			}

}
void merge(int a[],int b[],int m,int n)
{
	int *p,*q;
	for(p=c,q=a;q<a+m;p++,q++)
		*p=*q;
	for(p=c+m,q=b;q<b+n;p++,q++)
		*p=*q;
}
void show(int c[],int d)
{
	int *p;
	for(p=c;p<c+d-1;p++)
		my_printf("%d ",*p);
	my_printf("%d",*p);
}
int main_bench()
{
	duqu();
	range(a,b,m,n);
	merge(a,b,m,n);
	show(c,m+n);
}






