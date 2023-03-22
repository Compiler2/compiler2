#define NUM_ITER 5668

#include <header.h>


int main_bench()
{	int i,j,n;
	my_scanf("%d",&n);
	int s[100];
	for(i=0;i<n;i++){
		my_scanf("%d",&s[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(s[j]==s[i]){
				s[j]=0;
			}
		}
	}
	int a=0;
	for(i=0;i<n;i++){
		if(s[i]==0)
			continue;
		if(s[i]!=0){
			my_printf("%d",s[i]);
			for(j=i;j<n-1;j++){
			a=a+s[j+1];
			}
			if(a==0)continue;
			else my_printf(",");
		}
		a=0;
	}
	return 0;
}