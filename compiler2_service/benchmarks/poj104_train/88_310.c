#define NUM_ITER 709714

#include <header.h>


int main_bench()
{
	int i,a=0,sum=0;     
	char zf[30];
	gets(zf);
	for(i=0;i<30;i++){                     
		if('0'<=zf[i]&&zf[i]<='9'){      
			sum++;                  
                            a=0;
			my_printf("%c",zf[i]);     
		}  
		else if(a==0){                   
			my_printf("\n");
			a=1;
		}
	}
	return 0;
}