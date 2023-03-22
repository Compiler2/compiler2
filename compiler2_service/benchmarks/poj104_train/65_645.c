#include <header.h>

int main_bench(){
int n,i,a,b,x=0,y=0;

my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d%d",&a,&b);
		if(a==0&&b==1)
			x++;
		else if(a==1&&b==0)
			y++;
		else if(a==0&&b==2)
			y++;
		else if(a==2&&b==0)
			x++;
		else if(a==1&&b==2)
			x++;
		else if(a==2&&b==1)
			y++;
	}

		if(x>y){
			my_printf("A");
		}else if(x<y){
			my_printf("B");
		}else if(x==y){
			my_printf("Tie");
		}
	


	return 0;
}