#define NUM_ITER 839426

#include <header.h>

int main_bench()
{
	void sort(char a[],int n);
	int m,n;
	char a[100],b[100];
	my_scanf("%s %s",a,b);
	m=strlen(a);
	n=strlen(b);
	sort(a,m);
	sort(b,n);
	if(strcmp(a,b)==0) my_printf("YES");
	else my_printf("NO");
}
void sort(char a[],int n)
{
	int i,j,k;
	char temp;
	for(i=0;i<n;i++)
	{ k=i;
	for(j=i+1;j<n;j++)
		if(a[k]>a[j]) k=j;
		if(k!=i)
		{
			temp=a[i];
			a[i]=a[k];
			a[k]=temp;
		}
	}
}