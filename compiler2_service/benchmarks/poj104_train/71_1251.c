#include <header.h>

int f(int,int);
int main_bench(){
	int n,i,e;
	my_scanf("%d",&n);
	int y[n],m1[n],m2[n];
    for(i=0;i<n;i++){
		my_scanf("%d %d %d",&y[i],&m1[i],&m2[i]);
	}
	for(i=0;i<n;i++){
		if(m1[i]<m2[i]){
			e=m1[i];
			m1[i]=m2[i];
			m2[i]=e;
		}
		if((f(y[i],m1[i])-f(y[i],m2[i]))%7==0){
			my_printf("YES\n");
		}else{
			my_printf("NO\n");
		}
	}
	return 0;
		
}
int f(int y,int m){
	int x=0;
	for(int i=1;i<m;i++){
		if(i==4||i==6||i==9||i==11){
			x+=30;
		}else if(i==2){
			if(y%400==0||(y%4==0&&y%100!=0)){
				x+=29;
			}else{
				x+=28;
			}
		}else{
			x+=31;
		}
	}
	return x;
}
