#define NUM_ITER 30875

#include <header.h>


int main_bench()
{	char a[1000],b[100],e[100];

	int n,i,j=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s",a);
		for(j=0;a[j]!='\0';j++){
			if(a[j]=='A')my_printf("T");
			if(a[j]=='T')my_printf("A");
			if(a[j]=='G')my_printf("C");
			if(a[j]=='C')my_printf("G");
		}
		my_printf("\n");
	}
	
	return 0;
}
