#define NUM_ITER 37122

#include <header.h>

int main_bench(){
int m,i,k=0;
int a,b;
my_scanf("%d",&m);
for(i=0;i<m;i++){
	my_scanf("%d %d",&a,&b);
	if((a==0&&b==1)||(a==1&&b==2)||(a==2&&b==0)){
		k++;
	}else{
if(a!=b)
		k--;
	}
}

if(k>0)
	my_printf("A");
if(	k==0)
my_printf("Tie");
if(k<0)
my_printf("B");
return 0;
}