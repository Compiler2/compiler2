#define NUM_ITER 32648

#include <header.h>

int main_bench(){
int a[500],b[500],i,j,n,m;
i=0;
j=0;
my_scanf("%d",&n);
for(m=0;m<n;m++){
	my_scanf("%d", &(a[m]));
	my_scanf("%d", &(b[m]));
	if(a[m]==0&&b[m]==1)
		i+=1;
	else if(a[m]==1&&b[m]==2)
		i+=1;
	else if(a[m]==2&&b[m]==0)
		i+=1;
	else if(a[m]==b[m])
		continue;
	else
		j+=1;
}
if(i>j)
my_printf("A");
else if(i<j)
my_printf("B");
else 
my_printf("Tie");
return 0;
}
