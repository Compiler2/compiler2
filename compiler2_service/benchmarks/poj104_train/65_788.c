#include <header.h>

int main_bench(){
	int n,a,b,c=0,d=0;
	my_scanf("%d\n",&n);
    for(int i=1;i<=n;i++){
		my_scanf("%d%d",&a,&b);
		if(a-b==1){d=d+1;}else if(a-b==-1){
				c=c+1;}else if(a-b==-2){
					d=d+1;}else if(a-b==2){
						c=c+1;}else if(a=b){
							c=c;d=d;}}
if(c>d){my_printf("A");}else if(c==d){
		my_printf("Tie");}else if(c<d){my_printf("B");}
		return 0;

}
