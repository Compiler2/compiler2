#include <header.h>

int main_bench()
{
	int n,i=0,a[300],j,b=0,c[100],d=2;
	my_scanf("%d",&n);
	while(i<n)
	{
		my_scanf("%d",&a[i]);
		i++; 
	} c[1]=a[0]; for(i=1;i<n;i++)
{            b=0;       
            for(j=0;j<i;j++)
{if(a[i]==a[j])b=b;else b++; }  
      if(b!=i) b=0;
      else c[d]=a[i],d++       ;   } 
for(i=1;i<d-1;i++)my_printf("%d,",c[i] );my_printf("%d",c[d-1]);}    
        