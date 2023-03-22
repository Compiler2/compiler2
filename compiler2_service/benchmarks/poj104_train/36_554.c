#define NUM_ITER 867638

#include <header.h>

void swap(char a[],int n)
{
	int i,j;
	char t;
	for(j=0;j<n;j++)
		for(i=0;i<n-j-1;i++)
		if(a[i]>a[i+1])
		{
			t=a[i];
			a[i]=a[i+1];
			a[i+1]=t;
		}

}
int main_bench()
{
	char a[20];
	char b[20];
	my_scanf("%s %s",a,b);
	int al,bl;
	al=strlen(a);
	bl=strlen(b);
    swap(a,al);
	swap(b,bl);
	if(strcmp(a,b)==0)
		my_printf("YES\n");
	else 
		my_printf("NO\n");
}
