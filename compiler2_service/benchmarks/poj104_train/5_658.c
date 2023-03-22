#define NUM_ITER 937601

#include <header.h>

int main_bench(){
	int i,t,k=0;
	double rate;
	char a[501],b[501];
	my_scanf("%lf",&rate);
	my_scanf("%s",a);
	my_scanf("%s",b);
	if(strlen(a)!=strlen(b)){
	  my_printf("error");
	}
	else{
	  t=strlen(a);
	  for(i=0;i<t;i++){
		  if(a[i]!='T'&&a[i]!='G'&&a[i]!='C'&&a[i]!='A'){
		  my_printf("error");
		  break;
		  }
		  if(b[i]!='T'&&b[i]!='G'&&b[i]!='C'&&b[i]!='A'){
		  my_printf("error");
		  break;
		  }
		  if(a[i]==b[i]){
		  k++;
		  }
		  if(i==t-1){
	          if(1.0*k/t>=rate){
	          my_printf("yes");
			  }
	          else{
	          my_printf("no");
			  }
		  }
	  }
	}
return 0;
}
