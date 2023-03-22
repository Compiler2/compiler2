#include <header.h>

int main_bench(){

int n;
my_scanf("%d",&n);
int a=0;
int b=0;
int i;
for(i=0;i<n;i++){

int p;
int q;
my_scanf("%d %d",&p,&q);
if(p-q!=0){

	if(p-q==-1||p-q==2){
	a++;
	}
	else{
	b++;
	}




}

















}





if(a==b){
my_printf("Tie");

}
else if(a>b){

my_printf("A");

}

else{
my_printf("B");

}

















return 0;
}