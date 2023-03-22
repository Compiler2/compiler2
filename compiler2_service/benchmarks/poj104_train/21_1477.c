#define NUM_ITER 4261

#include <header.h>

int main_bench()
{
	int n,a[301]={0},i,j,l;
	float av=0,b[301]={0},k;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++) {my_scanf("%d",&a[i]); av+=a[i];}
	av=av/n;
	for(i=1;i<=n;i++) if(a[i]>av) b[i]=a[i]-av; else b[i]=av-a[i];
	for(i=1;i<=n;i++)
		for(j=1;j<=(n-i);j++)
			if(b[j]<b[j+1]) {k=b[j];b[j]=b[j+1];b[j+1]=k;
								l=a[j];a[j]=a[j+1];a[j+1]=l;}
			
	k=b[1];
	my_printf("%d",a[1]);
	for(i=2;i<=n;i++) if(b[i]==k) my_printf(",%d",a[i]);
	my_printf("\n");
}