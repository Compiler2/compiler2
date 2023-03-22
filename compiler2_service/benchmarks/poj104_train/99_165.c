#include <header.h>

int main_bench()
{
	int n,m=0,i,j=0,k=0,h=0;
	double gl1,gl2,gl3,gl4;
	int a[100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
		if(a[i]>=1&&a[i]<=18) m=m+1;
		if(a[i]>18&&a[i]<36) j=j+1;
		if(a[i]>35&&a[i]<61) k=k+1;
		if(a[i]>60) h=h+1;
	}
	gl1=(double)m/n*100;
	gl2=(double)j/n*100;
	gl3=(double)k/n*100;
	gl4=(double)h/n*100;
	my_printf("1-18: %.2lf%%\n",gl1);
	my_printf("19-35: %.2lf%%\n",gl2);
    my_printf("36-60: %.2lf%%\n",gl3);
    my_printf("60??: %.2lf%%\n",gl4);
    return 0;
}