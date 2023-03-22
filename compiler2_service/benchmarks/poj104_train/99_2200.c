#include <header.h>

int main_bench()
{
	int n,i,index,a[101];
    int age[5]={1,19,36,61,200};
	int s[101]={0};
    double b[4];
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
      my_scanf("%d",&a[i]); 
    for(i=0;i<n;i++)
	{
	    for(index=0;index<4;index++)
		    if(a[i]>=age[index]&&a[i]<age[index+1]) break;
	    s[index]=s[index]+1;
	}
    for(index=0;index<4;index++)
		b[index]=(double)s[index]*100/n;
	my_printf("1-18: %.2lf%%\n",b[0]);
    my_printf("19-35: %.2lf%%\n",b[1]);
    my_printf("36-60: %.2lf%%\n",b[2]);
    my_printf("60??: %.2lf%%\n",b[3]);
}