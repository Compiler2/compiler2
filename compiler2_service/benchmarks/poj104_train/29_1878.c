#include <header.h>

int main_bench()
{
	int m,i,j,e;
	int a[100];
	float s,q,w;
	my_scanf("%d",&m);
	for (i=0;i<m;i++)
	{
		my_scanf("%d",&a[i]);
		q=2,w=1,s=0;
	    for (j=1;j<=a[i];j++)
		{
		  s+=q/w;
		  e=q;
	   	  q=q+w;
	   	  w=e;
		}
		my_printf("%.3f\n",s);
	}
    return 0;
}
