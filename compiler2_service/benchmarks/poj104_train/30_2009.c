#define NUM_ITER 85127

#include <header.h>

int main_bench(){
int sum=0; 
int n,i;
    my_scanf("%d",&n);
for(i=1;i<=n;i++){
    if(i<7){
		sum+=i*i;
	}else if(i>=7){
	  if(i%7==0||(i-7)%10==0||i/10==7){
		continue;
	  }else{
		sum+=i*i;
	  }
	}
}
  my_printf("%d",sum);
  return 0;
}