#define NUM_ITER 15172

#include <header.h>

int main_bench(){
	int a,b,c,d,e,f;
	int A[100];
	int i=0,k=0;
	while(i<100){
		my_scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
		if(a==0){
			break;
		}
		else{
			int sum=0;
		sum=3600-60*b-c+3600*(d+12-a-1)+60*e+f;
		A[i]=sum;	
		
		i++;
		k++;
		}
	}
	for(i=0;i<k;i++){
    my_printf("%d\n",A[i]);
	}




	 return 0;
}
