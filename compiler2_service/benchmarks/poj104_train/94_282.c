#define NUM_ITER 18046

#include <header.h>

int main_bench()
{
int n,k,i,m,c;
int num[500];
int nu[500];
my_scanf("%d",&n);
for(i=0;i<n;i++){
	my_scanf("%d",&num[i]);
}
k=0;
i=0;
while(i<n){
	if(num[i]%2!=0){
		nu[k]=num[i];
		k++;
	}
	i++;
}
k=k-1;
for(i=0;i<=k;i++){
	for(m=0;m<=k-i;m++){
		if(nu[m]>=nu[k-i]){
			c=nu[m];
			nu[m]=nu[k-i];
            nu[k-i]=c;
		}
	}
}
for(i=k;i>0;i--){
	my_printf("%d,",nu[k-i]);
}
my_printf("%d",nu[k]);
	return 0;
}