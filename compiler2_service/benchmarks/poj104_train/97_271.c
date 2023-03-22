#include <header.h>

int main_bench()
{
	int data[6]={100,50,20,10,5,1};
	int num[6]={0};
	int sum,i;
	my_scanf("%d",&sum);
	for(i=0;i<6;i++){
		for(;;){
			if(sum-data[i]>=0){
				sum=sum-data[i];
		        num[i]++;
			}
			else break;
		}

	    my_printf("%d\n",num[i]);
	}

    return 0;
}

