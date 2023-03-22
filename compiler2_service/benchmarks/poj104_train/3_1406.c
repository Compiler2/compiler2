#define NUM_ITER 6767

#include <header.h>

int main_bench()
{int i,j,n,k,s[1100],p;
p=0;
my_scanf("%d %d",&n,&k);
for(i=1;i<=n;i++){
	my_scanf("%d",&s[i]);
}
my_scanf("%d",&k);
for(i=1;i<=n;i++){
	for(j=1;j<=n;j++){
		if(s[i]+s[j]==k){
		p++;
		}
	}
}
if(p==0){
    my_printf("no");
}else{
	my_printf("yes");
}
return 0;
}