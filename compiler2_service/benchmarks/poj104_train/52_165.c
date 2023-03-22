#include <header.h>

int main_bench()
{
    int n,m;
	int i,j;
    my_scanf ("%d%d", &n, &m);
    int *p;
    p = (int *)malloc(sizeof(int) * (n+1));
	for (i=0; i<n; i++) {
	my_scanf ("%d",p+i);
	}
	m %= n;
	for (j=0; j<m; j++) {
    	for (i=n; i>0; i--) {
	      *(p+i)=*(p+i-1);
		}	
          *p=*(p+n);	      				
	}    
	for (i=0; i<n-1; i++) {
       my_printf ("%d ",*(p+i));
	}
	my_printf ("%d", *(p+n-1));
	free (p);
    return 0;
}