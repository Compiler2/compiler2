#include <header.h>

int main_bench(){
	int n,i;
	int a,b;
	int c;
	my_scanf("%d%d%d",&n,&a,&b);
	if(n>=3){
        for(i=3;i<=n;i++){
		   my_scanf("%d",&c);
		   if(c>=a||c>=b){
			   if(a>=b){
				   b=c;
			   }
			   else{
				   a=c;
			   }
		   }
		   else{
			   continue;
		   }
		}
		if(a>=b){
			my_printf("%d\n%d",a,b);
		}
		else{
			my_printf("%d\n%d",b,a);
		}	  
	}
    else{
		my_printf("%d\n%d",a,b);
	}
	return 0;
}
