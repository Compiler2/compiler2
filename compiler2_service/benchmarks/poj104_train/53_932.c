#include <header.h>

int main_bench(){
int sz[300];
int n,i,k,a,b,m=1;
my_scanf("%d",&n);
my_scanf("%d",&(sz[0]));
for(i=1;i<n;i++){
	b=0;
	my_scanf("%d",&a);
	for(k=0;k<m;k++){
		if(sz[k]==a){
			b++;
		}
	}
	if(b==0){
		sz[m]=a;
		m++;
	}
}
my_printf("%d",sz[0]);
for(i=1;i<m;i++){
my_printf(",%d",sz[i]);
}
return 0;
}
