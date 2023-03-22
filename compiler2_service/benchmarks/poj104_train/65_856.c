#define NUM_ITER 32474

#include <header.h>

int main_bench(){
int n;
my_scanf("%d",&n);
int b[n][2];
int i,j,a=0,c=0;
for(i=0;i<n;i++){
     my_scanf("%d%d",&b[i][0],&b[i][1]);
	}

for(i=0;i<n;i++){
	if(b[i][0]==0&&b[i][1]==1){
		a++;
	}else if(b[i][0]==1&&b[i][1]==2){
		a++;
	}else if(b[i][0]==2&&b[i][1]==0){
		a++;
	}else if(b[i][1]==1&&b[i][0]==2){
		c++;
	}else if(b[i][1]==0&&b[i][0]==1){
		c++;
	}else if(b[i][1]==2&&b[i][0]==0){
		c++;
	}else if(b[i][0]==b[i][1]){
	   continue;
	}
}
if(a>c){
	my_printf("A");
}else if(a<c){
	my_printf("B");
}else if(a==c){
	my_printf("Tie");
}
return 0;



}
