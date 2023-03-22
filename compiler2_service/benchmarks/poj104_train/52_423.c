#define NUM_ITER 56566

#include <header.h>

int main_bench()
{
     int m,n,i;
     my_scanf("%d%d",&n,&m);
	 int *pi;
     pi=(int*)malloc(sizeof(int)*(2*n-m));
	 for (i=0;i<n;i++)
	 {
		 my_scanf("%d",pi+i);
	 }
     for (i=0;i<n-m;i++)
	 {
		 *(pi+i+n)=pi[i];
	 }
	 my_printf("%d",pi[n-m]);
	 for(i=n-m+1;i<2*n-m;i++)
	 {
		 my_printf(" %d",pi[i]);
	 }
	 free (pi);
	return 0;
}
