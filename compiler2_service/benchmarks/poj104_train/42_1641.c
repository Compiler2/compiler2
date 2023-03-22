#include <header.h>

int main_bench()
{
	int i,j,n,m,k=0;
	my_scanf("%d",&n);
    int *p;
    p=(int *)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
    my_scanf("%d",p+i);
    my_scanf("%d",&m);
    for(i=0;i<n-k;i++){
    	if(*(p+i)==m){
	       k++;
		   for(j=i;j<n-k;j++)
		      *(p+j)=*(p+j+1);
           i--;
	    }    	
    }
    for(i=0;i<n-k-1;i++)
   	my_printf("%d ",*(p+i));
   	my_printf("%d",*(p+n-k-1));
}