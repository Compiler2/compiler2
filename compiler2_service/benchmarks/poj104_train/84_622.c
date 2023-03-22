#include <header.h>

int main_bench()
{int n,a,b,p,q;
my_scanf("%d%d%d",&n,&a,&b);
if(a>=b){p=a;q=b;}
else{p=b;q=a;}
for(int i=2;i<n;i++){
int m;
	my_scanf("%d",&m);
	if(m>=p){q=p;p=m;}
	else{if(m>=q){q=m;}}
}
my_printf("%d\n%d\n",p,q);
return 0;
}