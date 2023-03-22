#include <header.h>

int main_bench()
{
int k,m,n,i,a,b,c;
int jz[100][100];
my_scanf("%d",&k);
for(i=1;i<=k;i++){
	my_scanf("%d %d",&m,&n);
	for(a=0;a<m;a++){
		for(b=0;b<n;b++){
			my_scanf("%d",&jz[a][b]);
		}
	}
	c=0;
	for(a=0;a<m;a++){
		for(b=0;b<n;b++){
			if(a==0||b==0){
				c=c+jz[a][b];
			}else if(a==m-1||b==n-1){
				c=c+jz[a][b];
			}
		}
	}
	my_printf("%d\n",c);
}
	return 0;
}