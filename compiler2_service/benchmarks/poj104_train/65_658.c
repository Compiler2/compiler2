#define NUM_ITER 39487

#include <header.h>

int main_bench(){
	int m,n,s,i,a[200],b[200];

my_scanf("%d",&n);
s=0;
m=0;
for(i=0;i<n;i++){
my_scanf("%d%d",&a[i],&b[i]);
if(a[i]==1&&b[i]==0)
		s++;
if(a[i]==0&&b[i]==2)
		s++;
if(a[i]==2&&b[i]==1)
		s++;
if(a[i]==0&&b[i]==1)
		m++;
if(a[i]==1&&b[i]==2)
		m++;
if(a[i]==2&&b[i]==0)
		m++;
}
if(s>m)
	my_printf("B");
if(s==m)
	my_printf("Tie");
if(s<m)
	my_printf("A");
		
    
return 0;
}


