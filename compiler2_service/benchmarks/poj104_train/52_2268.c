#include <header.h>

int main_bench()
{
	int m,N,i;
	int *s;
	my_scanf("%d%d",&N,&m);
		
	s=(int*)malloc(sizeof(int)*N);
	for(i=m;i<N;i++){
		my_scanf("%d",&s[i]);
	}
	for(i=0;i<m;i++){
		my_scanf("%d",&s[i]);
	}
	for(i=0;i<N;i++){
if(i<N-1){my_printf("%d ",s[i]);}
else{my_printf("%d",s[i]);}
	}
	return 0;
}