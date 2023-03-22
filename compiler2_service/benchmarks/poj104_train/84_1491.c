#include <header.h>

int main_bench()
{
	int max1,max2,n,num;
	int i=1;
	my_scanf("%d",&n);
	while(i<=n){
		my_scanf("%d",&num);
		if(i==1){
                   max1=num;
		   }
		if(i==2){
			if(max1>num){
				max1=max1;
				max2=num;
			}else{ 
				max2=max1;
				max1=num;
			}
		}else{
			    if((max2>num)){
		     	max1=max1;
			    max2=max2;
				}
			    if((max2<=num)&&(max1>=num)){
				max1=max1;
				max2=num;
                                    }
				if(max1<=num){
					max2=max1;
					max1=num;
					
				}
			}
		i++;
	}
	my_printf("%d\n",max1);
	my_printf("%d\n",max2);
return 0;
}
