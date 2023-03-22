#include <header.h>

int main_bench()
{
    int n,i,a,b,A=0,B=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d%d",&a,&b);
		if(a==0&&b==1){
			A++;
		}else if(a==0&&b==0){
			continue;
		}else if(a==0&&b==2){
			B++;
        }else if(a==1&&b==0){
			B++;
		}else if(a==1&&b==1){
			continue;
		}else if(a==1&&b==2){
			A++;
		}else if(a==2&&b==0){
			A++;
		}else if(a==2&&b==1){
            B++;
		}else if(a==2&&b==2){
			continue;
		}
		
	}
	if (A>B){
		my_printf("A");
	}else if(A<B){
		my_printf("B");
	}else if(A=B){
		my_printf("Tie");
	}
	return 0;
}