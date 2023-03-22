#define NUM_ITER 56888

#include <header.h>

int main_bench() {
int n,m;
my_scanf("%d%d",&n,&m);
int sz[100];
for(int i=m;i<=n-1;i++){my_scanf("%d",&(sz[i]));}
for(int j=0;j<=m-1;j++){my_scanf("%d",&(sz[j]));}
for(int p=0;p<=n-1;p++){
	if(p==n-1){my_printf("%d",sz[p]);}
	else {my_printf("%d ",sz[p]);}
}
return 0;
}