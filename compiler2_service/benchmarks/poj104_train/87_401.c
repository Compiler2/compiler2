#define NUM_ITER 109343

#include <header.h>

int main_bench()
{
	int t[6],i,j,s;
	for(i=0;i<=1000;i++){
		for(j=0;j<6;j++){
			my_scanf("%d",&t[j]);
		}
                  if(t[3]==0){
                     break;
                  }
		s=3600*(t[3]-t[0]+11)+60*(60-t[1]+t[4])-t[2]+t[5];
		my_printf("%d\n",s);
	}
	return 0;
}
		