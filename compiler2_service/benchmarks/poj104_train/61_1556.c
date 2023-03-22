#define NUM_ITER 6535

#include <header.h>

int F(int n);
int main_bench(){
	int n,m,result;
	my_scanf("%d", &m);
for(int k=0;k<m;k++){
my_scanf("%d", &n);
	result = F(n);
	my_printf("%d\n", result);
}
	return 0;
}

  int F(int n){
	  int c=0;
if(n==0)      return 0;
if(n==1||n==2)      return 1;
if(n>2){
	int a=1,b=1,c=0;
for(int i=2;i<n;i++){
c=a+b;
a=b;
b=c;
}

return c;}
  }