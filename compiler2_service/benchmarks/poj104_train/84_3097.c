#define NUM_ITER 5247

#include <header.h>

int main_bench()
{
	int e,len;
	my_scanf("%d",&len);
	int num[100];
	for(int i=0;i<len;i++)
		my_scanf("%d",&(num[i]));
	for(int k=1;k<len;k++){
		for(int i=0;i<len-k;i++){
			if(num[i]<num[i+1]){
				e=num[i+1];
				num[i+1]=num[i];
				num[i]=e;
			}
		}
	}
	my_printf("%d\n%d\n",num[0],num[1]);
	return 0;
}
