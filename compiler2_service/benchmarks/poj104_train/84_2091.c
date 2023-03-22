#define NUM_ITER 55118

#include <header.h>

int main_bench(){
	int num,max1,max2;
	int n;
	int a;
	int i;
    my_scanf("%d%d",&n,&num);
	max1= num;
my_scanf("%d",&num);
		if (num>max1){
		 a=max1;
		 max1=num;
		 max2=a;}
		else{
			max2=num;
			}
       for (i=0;i<n-2;i++){
		my_scanf("%d",&num);
		if (num>max1){
		 a=max1;
		 max1=num;
	     max2=a;}
	else if (num>max2)
		max2=num;}
    my_printf("%d\n%d\n",max1,max2);
	return 0;
}