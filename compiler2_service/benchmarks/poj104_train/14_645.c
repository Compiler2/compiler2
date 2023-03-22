#define NUM_ITER 23826

#include <header.h>

struct f{
	int a;
	int b;
	int c;}st[100000],tp;
int main_bench(){
	int n,i,ii,j,d,a,b,c;
	char cc;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++){
		my_scanf("%d%d%d",&st[i].a,&st[i].b,&st[i].c);
	st[i].b+=st[i].c;
	}
	for(i=1;i<=3;i++){
		for(j=i+1;j<=n;j++){
			if(st[j].b>st[i].b){
				tp=st[i];
				st[i]=st[j];
				st[j]=tp;}}}
	for(i=1;i<=3;i++)
	my_printf("%d %d\n",st[i].a,st[i].b);
}

		