#define NUM_ITER 4027

#include <header.h>

int main_bench()
{
	int n,i,j,a[300]={0};
	float sum=0,ave,temp;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
for(i=0;i<n;i++)
		for(j=0;j<(n-i);j++)
		{ if(a[j]>a[j+1])
		{temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;}}
for(i=1;i<=n;i++)
		sum=sum+(float)a[i];
     ave=sum/((float)n);
	 if((ave-(float)a[1])>((float)a[n]-ave)) my_printf("%d",a[1]);
	 else if((ave-(float)a[1])<((float)a[n]-ave)) my_printf("%d",a[n]);
	 else if((ave-(float)a[1])==((float)a[n]-ave)) my_printf("%d,%d",a[1],a[n]);
	 my_printf("\n");
}
