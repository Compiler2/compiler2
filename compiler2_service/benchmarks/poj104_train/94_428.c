#include <header.h>

int main_bench(){int sz[4000],az[4000];
int i=0,n,m,h=1,t=0;
my_scanf("%d",&n);
for(i=0;i<n;i++){my_scanf("%d",&az[i]);
if((az[i])%2!=0){sz[t]=az[i];t++;}}
for(h=1;h<t;h++){
	i=0;
for(i=0;i<t-h;i++){if(sz[i]>sz[i+1]){m=sz[i+1];
sz[i+1]=sz[i];
sz[i]=m;}}}
i=1;	
	for(i=0;i<t-1;i++){my_printf("%d,",sz[i]);}my_printf("%d",sz[t-1]);
	return 0;}
