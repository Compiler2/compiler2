#include <header.h>


int main_bench()
{
 int n,i,a[100],j,k,b;
 my_scanf("%d",&n);
 for(i=0;i<=(n-1);i++)
 {
	 my_scanf("%d",&a[i]);
 }
 for(j=0;j<=(n-1);j++)
 {
	 for(k=0;k<(n-1-j);k++)
	 {
        if(a[k]<a[k+1])      
		{b=a[k];
	   a[k]=a[k+1];
	   a[k+1]=b;}
	 }
 }

my_printf("%d\n%d\n",a[0],a[1]);
}