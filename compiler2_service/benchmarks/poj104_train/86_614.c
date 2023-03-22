#define NUM_ITER 1213

#include <header.h>

int main_bench()
{
	int n,i,j,t,num;
    int br[100];
    int count[100][61]={0};
    my_scanf("%d",&n);
    for (i=0;i<n;i++){
		my_scanf("%d",&br[i]);
        for (j=0;j<br[i];j++){
			my_scanf("%d",&t);
			count[i][t-1]=1;
		}
	}
    for (i=0;i<n;i++){
		j=0;num=0;
		while (j<60){
			j+=1;
            num+=1;
            if(count[i][num-1]==1) {
				j+=3;
				
			};
		}
		my_printf("%d\n",num);
	}
	return 0;
}

