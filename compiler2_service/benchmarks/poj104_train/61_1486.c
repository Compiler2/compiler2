#define NUM_ITER 4449

#include <header.h>

int main_bench(){
int k,n,s=0;
int a=1,b=1;
my_scanf("%d",&k);
for(int q=1;q<=k;q++){
 my_scanf("%d",&n);
 if(n==1||n==2){
  s=1;
}
else{
	for(int w=1;w<n-1;w++){
	s=a+b;
	a=b;
	b=s;
	}
}
my_printf("%d\n",s);
s=0;
a=1;
b=1;
}
return 0;
}