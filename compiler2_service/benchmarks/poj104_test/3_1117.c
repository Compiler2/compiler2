#include <header.h>

int main_bench(){
	int n,k,i,p;
	my_scanf("%d %d",&n,&k);
	int m=1;
	int sz[1000];
	for(i=0;i<n;i++){
		my_scanf("%d",&sz[i]);}
	
	for(i=0;i<n&&m==1;i++){
		for(p=i+1;p<n&&m==1;p++){
			if(sz[i]+sz[p]==k) 
			{
				my_printf("yes");
				m=0;
		}
	}
	}
	if(m==1)
		my_printf("no");
	return 0;
}
