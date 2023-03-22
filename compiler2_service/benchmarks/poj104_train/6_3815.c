#define NUM_ITER 32

#include <header.h>

int main_bench(){
int n,i,k,l,ha,li,x,s;
my_scanf("%d",&n);
for(i=0;i<n;i++){
	s=0;
	my_scanf("%d %d",&ha,&li);
	for(l=0;l<ha;l++){
		for(k=0;k<li;k++){
			my_scanf("%d",&x);
			if(l==0||l==(ha-1)||(k==0&&l!=0&&l!=(ha-1))||(k==(li-1)&&l!=0&&l!=(ha-1))){
				s=s+x;
		}
	}
	}
my_printf("%d\n",s);
}
return 0;
}
