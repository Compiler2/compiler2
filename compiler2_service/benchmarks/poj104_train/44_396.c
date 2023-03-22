#define NUM_ITER 473322

#include <header.h>

int reverse(int num){
	int i,j,k,sum=0,s,p;
	int u[100];
	if(num>=0){
    p=num;
	for(i=0;p>0;i++){
		u[i]=p%10;
		p=p/10;
	}
	s=i;
	for(i=s-1;i>=0;i--){
		sum=sum*10+u[s-1-i];
	}
	return sum;}
	if(num<0){
    p=-num;
	for(i=0;p>0;i++){
		u[i]=p%10;
		p=p/10;
	}
	s=i;
	for(i=s-1;i>=0;i--){
		sum=sum*10+u[s-1-i];
	}
	return -sum;}
	
}
int main_bench(){
	int a,b,c,d,e,f;
	my_scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	my_printf("%d\n%d\n%d\n%d\n%d\n%d",reverse(a),reverse(b),reverse(c),reverse(d),reverse(e),reverse(f));
return 0;
}