#define NUM_ITER 91604

#include <header.h>


int main_bench()
{
	char a;
	int i;
	for(i=0;i<30;i++){
		my_scanf("%c",&a);
	
		
		if(a=='0'||a=='1'||a=='2'||a=='3'||a=='4'||a=='5'||a=='6'||a=='7'||a=='8'||a=='9')
			my_printf("%c",a);
		else 
			my_printf("\n");
	}

	return 0;
}