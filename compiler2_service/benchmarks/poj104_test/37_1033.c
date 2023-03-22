#include <header.h>

int main_bench(){
int n,i,k,t;
int m,s;
char sz[5000];
my_scanf("%d",&n);
for(i=1;i<=n;i++){
	my_scanf("%s",&sz);
	s=0;
	for(k=0;sz[k]!='\0';k++){
		m=0;
		for(t=0;sz[t]!='\0';t++){
			if(sz[k]==sz[t]){
				m++;
			}
		}
		if(m==1){
			my_printf("%c\n",sz[k]);
			s++;
			break;
		}
	}
	if(s==0){
		my_printf("no\n");
	}
}
	return 0;
}
