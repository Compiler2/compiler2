#include <header.h>

int main_bench(){
	int n,x,y,i,a=0,b=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d%d",&x,&y);
		if((x==0&&y==1)||(x==2&&y==0)||(x==1&&y==2)){
			a++;}
		if((x==1&&y==0)||(x==0&&y==2)||(x==2&&y==1)){
			b++;}}
	if(a==b){my_printf("Tie");}
	if(a>b){my_printf("A");}
	if(a<b){my_printf("B");}




	
     return 0;}