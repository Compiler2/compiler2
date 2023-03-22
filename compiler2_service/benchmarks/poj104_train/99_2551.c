#define NUM_ITER 52624

#include <header.h>

int main_bench()
{int n,i,a[100],e=0,b=0,c=0,d=0;
double w,x,y,z;
my_scanf("%d",&n);
for(i=0;i<=n-1;i++)
{
	my_scanf("%d",&a[i]);
	if(a[i]<=18){e++;}
	if(a[i]>18&&a[i]<=35){b++;}
	if(a[i]>35&&a[i]<=60){c++;}
	if(a[i]>60){d++;}
}
w=(double)100*e/n;x=(double)100*b/n;y=(double)100*c/n;z=(double)100*d/n;
my_printf("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%",w,x,y,z);
return 0;
}