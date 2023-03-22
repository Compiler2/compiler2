#define NUM_ITER 277983

#include <header.h>

int DiJiTian(int x);
int main_bench(){
	int w,i,m,n,y;
	my_scanf("%d",&w);
	for(i=1;i<=12;i++){
	   y=DiJiTian(i)-1;
	   m=y%7;
	   n=m+w;
	   if(n>7){
	     n=n-7;
	   }
	   if(n==5){
	       my_printf("%d\n",i);
	   }
	}
   
return 0;
}
int DiJiTian(int x){
  int result;
  int j;
  if(x==1){result=13;}
  else{
	  result=0;
	  for (j=1;j<x;j++){
		  if(j==1||j==3||j==5||j==7||j==8||j==10||j==12){
		      result+=31;
		  }
		  else if(j==4||j==6||j==9||j==11){
		      result+=30;
		  }
		  else if(j==2){
		      result+=28;
		  }
	  }
	  result+=13;
  }
  return result;
}

