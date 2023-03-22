#include <header.h>

int main_bench(){
	int a,m,i,num,n;
	my_scanf("%d",&a);
	i=1;
    while(i<=a){
		my_scanf("%d",&num);
		if(i==1){
		n=0,m=num;}
		else{
        if((num>m)&&(num>n)){
			n=m,m=num;}
		else if((num<m)&&(num>n)){
			n=num;}
	}
		i=i+1;
	}
	my_printf("%d\n%d",m,n);
			return 0;
}