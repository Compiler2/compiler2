#define NUM_ITER 232687

#include <header.h>

int exchange(int n,int m,int num[5][5])
{
	int i;
	int t;
	if(n>=0&&n<5&&m>=0&&m<5){
		for(i=0;i<5;i++){
			t=num[n][i];
			num[n][i]=num[m][i];
			num[m][i]=t;
		}
		return 1;
	}
	if(n<0||n>=5||m<0||m>=5){
		return 0;
	}
}

int main_bench()
{
    int num[5][5];
	int i,j;
	int n,m;
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			my_scanf("%d",&num[i][j]);
		}
	}
	my_scanf("%d%d",&n,&m);
	
	if(exchange(n,m,num)==1){
		for(i=0;i<5;i++){
		    for(j=0;j<4;j++){
			    my_printf("%d ",num[i][j]);
			}
		    my_printf("%d",num[i][4]);
		    my_printf("\n");
		}
	}
	if(exchange(n,m,num)==0){
		my_printf("error\n");
	}

	return 0;
}