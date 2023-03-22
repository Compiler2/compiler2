#include <header.h>

int main_bench()
{
	int m,n,i,j,t,*p;
	my_scanf("%d%d",&n,&m);
	p=(int*)malloc(sizeof(int)*n);

	for(i=0;i<n;i++)
		my_scanf("%d",(p+i));
	
	for(i=0;i<m;i++){
		t=*(p+n-1);
	    for(j=n-1;j>=1;j--){
			*(p+j)=*(p+j-1);
		}
		*p=t;
	}

	for(i=0;i<n-1;i++)
		my_printf("%d ",*(p+i));
		my_printf("%d",*(p+n-1));
	  
	my_printf("\n");
	free(p);
	return 0;
}



