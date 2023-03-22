#define NUM_ITER 1326

#include <header.h>

int main_bench()
{   
    int n=0,i=0;
	int minnum=60;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
        int m;
	    my_scanf("%d",&m);
		int p=0;
		for(p=0;p<m;p++){
			int number;
			my_scanf("%d",&number);
			if((number+3*p)<=60){
				if((60-number-(3*p)-3)>=0)
					minnum=60-(3*p)-3;
				else if((60-number-(3*p)-3)<0)		
                    minnum=number;
			}
		}
		my_printf("\n%d\n",minnum);
	}
	return 0;
}