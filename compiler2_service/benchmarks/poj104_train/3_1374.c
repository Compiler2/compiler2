#define NUM_ITER 3232

#include <header.h>


int main_bench()
{
int n,k,a,h;
int sz[1000];
h=0;
my_scanf("%d %d",&n,&k);
for(int i=0;i<n;i++){
   my_scanf("%d ",&sz[i]);
}
for(int j=0;j<n;j++){
	for(int r=0;r<n;r++){
		a=sz[j]+sz[r];
		if(a!=k){
		   h++;
		}
			
	}
}
if(h==n*n){
	my_printf("no");
}else{
	my_printf("yes");
}



	return 0;
}
