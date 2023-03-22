#define NUM_ITER 6340

#include <header.h>

int main_bench(){
int sz[300],nsz[300];
int n,i,j,a,b=0;
my_scanf("%d",&n);
for(i=0;i<n;i++){
my_scanf("%d",&sz[i]);
}
for(j=1;j<n;j++){
	for(a=j;a>0;a--){
		if(sz[j]==sz[a-1]){break;}
		else if((sz[j]!=sz[a-1])&&(a==1)){nsz[b]=sz[j];b++;}
		else if((sz[j]!=sz[a-1])&&(a!=1)){continue;}
	}
}
my_printf("%d,",sz[0]);

for(int c=0;c<b;c++){
	if(c==b-1){
		my_printf("%d",nsz[c]);
	}else{
		my_printf("%d,",nsz[c]);
	}
}
return 0;
}