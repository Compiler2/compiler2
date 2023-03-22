#include <header.h>

int main_bench()
{
	int n,i,N;
	double total;
	total=1.0;
    my_scanf("%d",&N);
    if(N==0){
             total=1;}
    if(N!=0){
    for(i=0;i<N;i++){
                     total*=2;
                     }
    }
    my_printf("%.0lf",total);                
	my_scanf("%d",&n);
	return 0;
}

