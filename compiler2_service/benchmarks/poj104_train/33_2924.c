#include <header.h>

int main_bench()
{
	int m,i,j,k=0;
	char q;
	my_scanf("%d",&m);
	for(i=0;i<m;i++){
		for(j=0;j<200;j++){
				my_scanf("%c",&q);
		 switch(q)
			{
			case'A':my_printf("T");
				break;
			case'T':my_printf("A");
				break;
			case'C':my_printf("G");
				break;
			case'G':my_printf("C");
				break;
	 			default :my_printf("\n");
				}
		}
	}		
	return 0;
}