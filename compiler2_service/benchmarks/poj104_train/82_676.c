#include <header.h>

int main_bench(){
	int a,b,n,i,x=0,m=0;
	my_scanf("%d",&n);
    if(n==1){
		my_scanf("%d %d",&a,&b);
		if((a>=90)&&(a<=140)&&(b>=60)&&(b<=90)){
			my_printf("1");
		}else{
			my_printf("0");
		}
	}
    if(n!=1){
	for(i=0;i<n;i++){
		my_scanf("%d %d",&a,&b);
		   if((a>=90)&&(a<=140)&&(b>=60)&&(b<=90)){
			x++;
		   }else{
			   if(x>m){
				   m=x;
			   }
			   x=0;
		 }
	}
	if(x>m){
		m=x;
	}
	my_printf("%d",m);
	}
	return 0;
}