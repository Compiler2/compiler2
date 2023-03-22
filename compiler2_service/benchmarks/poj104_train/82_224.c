#include <header.h>

int main_bench(){
	int a,b,c,mid,i,n,high,low,stop;
	a=0;
	b=0;
	c=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d %d",&high,&low);
		if((high>=90)&&(high<=140)&&(low<=90)&&(low>=60)){
			a++;
			c=a;
		}else{
			
		
		
			if(a>0){
				mid=b;
				if(a>mid){
					b=a;
				}				
				a=0;
			}
		}
	}
	if(c<b){
		my_printf("%d",b);
	}else{
		my_printf("%d",c);
	}
	return 0;
}