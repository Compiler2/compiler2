#include <header.h>

int main_bench()
{int n,a[99],i,max,s,c,j;
	my_scanf("%d",&n);
	my_scanf("%d",&s);
	a[0]=s;
	max=s;
	c=-1;
	for(i=1;i<n;i++)
	{  my_scanf("%d",&s);  
	  a[i]=s;
       if (max<a[i])
	   {max=a[i];
	   j=i;}
	}
	my_printf("%d\n",max);
    
	for(i=0;i<n;i++)
	{
		if(c<a[i]&&i!=j)
	  c=a[i];
	   }
    my_printf("%d",c);
}