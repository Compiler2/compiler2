#include <header.h>

int main_bench()
{
	int i,j,h,f;
	double n,sum,k;
	char sz[2][501];
	my_scanf("%lf%s%s",&n,sz[0],sz[1]);
	sum=0;
	f=1;
	j=strlen(sz[0]);
	h=strlen(sz[1]);
	if(j!=h){
		my_printf("error\n");
	}else{
		for(i=0;i<j;i++){
			if((sz[0][i]=='A'||sz[0][i]=='T'||sz[0][i]=='C'||sz[0][i]=='G')&&(sz[1][i]=='A'||sz[1][i]=='T'||sz[1][i]=='C'||sz[1][i]=='G')){
				if(sz[0][i]==sz[1][i])
					sum+=1.0;
			}else{
				my_printf("error\n");
				f=0;
				break;
			}
		}
		if(f!=0){
    		k=sum/(j*1.0);
	    	if(k>=n){
	    		my_printf("yes\n");
			}else{
	    		my_printf("no\n");
			}
		}	
	}
	return 0;
}