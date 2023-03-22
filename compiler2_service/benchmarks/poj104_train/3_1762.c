#include <header.h>

int main_bench()
{
	int n,b,s[1000],a;
	my_scanf("%d %d",&n,&b);
	for(int i=0;i<n;i++){
		my_scanf("%d",&s[i]);
	}
	for(int k=0;k<n;k++){
		for(int i=1;i<n-k;i++){
			a=s[k]+s[k+i];
			if(a==b){
				my_printf("yes");
				return 0;
			}
		}
	}
	my_printf("no");	
	return 0;
}