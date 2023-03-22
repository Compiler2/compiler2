#include <header.h>



int main_bench(){ 
	int n,i,a,b,c;
	c=0;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++){
		my_scanf("%d %d",&a,&b);
		if((a==0&&b==1)||(a==1&&b==2)||(a==2&&b==0)){
			c++;
		}else if(a==b){
		c+=0;
		}else{
			c--;
		}
	}
	if(c>0){
	my_printf("A");
	}else if(c==0){
	my_printf("Tie");
	}else{
	my_printf("B");
	}




	return 0;
}

