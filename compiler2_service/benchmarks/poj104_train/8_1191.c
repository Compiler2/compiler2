#include <header.h>

int m,n,a[200],b[100];
int main_bench()
{
	void getarray();
	void paixu(int s[],int t);
	void hebin();
	void print();
	getarray();
	paixu(a,m);
	paixu(b,n);
	hebin();
	print();
	return 0;
}
void getarray()
{
	int i;
	my_scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
		my_scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		my_scanf("%d",&b[i]);
}
void paixu(int s[],int t)
{
	int i,j,temp;
	for(j=1;j<t;j++)
		for(i=0;i<t-j;i++)
			if(s[i]>s[i+1]){
				temp=s[i];
				s[i]=s[i+1];
				s[i+1]=temp;
			}
}
void hebin()
{
	int i;
	for(i=m;i<m+n;i++)
		a[i]=b[i-m];
}
void print()
{
	int i;
	my_printf("%d",a[0]);
	for(i=1;i<m+n;i++)
		my_printf(" %d",a[i]);
}