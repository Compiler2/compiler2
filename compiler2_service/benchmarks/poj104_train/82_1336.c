#include <header.h>

int main_bench(){
	int n,i,m=0,j=0;
	struct p{
		int u,v;
	}p[100];
	my_scanf("%d\n",&n);
	for(i=0;i<n;i++){
		my_scanf("%d%d",&p[i].u,&p[i].v);
		if(p[i].u>=90&&p[i].u<=140&&p[i].v>=60&&p[i].v<=90){
			j=j+1;
			if(j>m)
				m=j;
		}
		else{
			j=0;
		}
	}
	my_printf("%d",m);
	return 0;
}