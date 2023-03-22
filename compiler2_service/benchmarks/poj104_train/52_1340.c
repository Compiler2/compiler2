#define NUM_ITER 52977

#include <header.h>

int main_bench(){
int i,n,m;
	my_scanf("%d %d",&n,&m);
int *p=(int*)malloc(sizeof(int)*n);
for(i=0;i<n;i++)
my_scanf("%d",p+i);
for(i=n-m;i<2*n-m;i++){
	my_printf("%d",*(p+i%n));
if(i==2*n-m-1)
break;
else my_printf(" ");
}
free(p);
}