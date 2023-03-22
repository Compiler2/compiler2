#define NUM_ITER 1210246

#include <header.h>


int main_bench(){
	int a,b=3,c=5,d=7;
	
	my_scanf("%d",&a);
	if(a%3==0&&a%5==0&&a%7==0)
		my_printf("%d %d %d",b,c,d);
	else{
		if(a%3==0&&a%5==0)
			my_printf("%d %d",b,c);
		else{
			if(a%3==0&&a%7==0)
				my_printf("%d %d",b,d);
			else{
				if(a%5==0&&a%7==0)
					my_printf("%d %d",c,d);
				else{
					if(a%3==0)

			            my_printf("%d",b);
					else{
						if(a%5==0)
							my_printf("%d",c);
						else{
							if(a%7==0)
								my_printf("%d",d);
							else
								my_printf("n");
						}
					}
				}
			}
		}
	}


	return 0;
}

	