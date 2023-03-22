#include <header.h>

int main_bench(){
int i,n,k;
my_scanf("%d %d",&n,&k);
int sz[1000];
for(i=0;i<n;i++){
	my_scanf("%d",&sz[i]);
}
int j;
for(i=0;i<n;i++){
	
	for(j=0;j<n;j++){
		if((sz[i]+sz[j])==k){
		my_printf("yes");

	break;
	}

	
}

		if((sz[i]+sz[j])==k){
		break;}

	}

int a=i,b=j;
if((a==n)&&(b==n)&&(sz[n-1]+sz[n-1]!=k)){
my_printf("no");
}	


	return 0;
}
