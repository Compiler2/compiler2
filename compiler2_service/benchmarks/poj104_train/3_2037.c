#include <header.h>

int main_bench()
{
	int n,i,k,p,q,m=0;
	my_scanf("%d%d\n",&n,&k);
	int gram[n][n],sz[n];
	for(i=0;i<n;i++){
		my_scanf("%d",&sz[i]);
		}
	for(p=0;p<n;p++){
		for(q=0;q<n;q++){
			gram[p][q]=sz[p]+sz[q];
			if(gram[p][q]==k){
			    m++;
				}
			}
		if(gram[p][q]==k){
			m++;
			}
		}
	if(m==0) my_printf("no");
	else my_printf("yes");
	return 0;
}
