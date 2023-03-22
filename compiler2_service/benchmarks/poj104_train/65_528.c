#define NUM_ITER 34800

#include <header.h>

int main_bench(){
int n,i,A,B;
int a[100],b[100];
my_scanf("%d",&n);
A=0;
B=0;
for(i=1;i<=n;i++){
my_scanf("%d%d",&a[i],&b[i]);
}
for(i=1;i<=n;i++){
if(a[i]-b[i]==1||b[i]-a[i]==2){
B=B+1;
}
	  else if(b[i]-a[i]==1||a[i]-b[i]==2){
     A=A+1;
	  }
}
if(A>B){
	my_printf("A\n");
}
else if(A==B){
	my_printf("Tie\n");
}
else{
	my_printf("B\n");
}
	return 0;
}