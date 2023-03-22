#include <header.h>

int main_bench()
{
     int n,i,a[300],*p,*q;

	 my_scanf("%d",&n);
	 for(i=0;i<n;i++)
		 my_scanf("%d",&a[i]);
	 p=a;
	 my_printf("%d",*p);
	 for(p=a+1;p<a+n;p++)
	 {
		 for(q=p-1;q>=a;q--)
		 {
			 if(*p==*q)break;
		 }
		 if(q<a)
			 my_printf(",%d",*p);
	 }
	 return 0;
}

