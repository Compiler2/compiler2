#include <header.h>

char anti_base(char base){
	char anti;
	    if(base == 'A')
			anti = 'T';
		if(base == 'T')
			anti = 'A';
		if(base == 'G')
		    anti = 'C';
	    if(base == 'C')
			anti = 'G';
		return anti;
}
int main_bench(){
	int n,i,j;
	my_scanf ("%d",&n);
	char sequence[n][300],a;
	for (i = 0; i < n; i ++){
		my_scanf("%s",sequence[i]);
	}
	for (i = 0;i < n;i ++){
	for (j = 0;;j ++){
		if(sequence[i][j] != 0 ){
	     	a = anti_base(sequence[i][j]);
	    	my_printf("%c",a);
		}
		else
			break;
	}
	 my_printf("\n");
	}


}