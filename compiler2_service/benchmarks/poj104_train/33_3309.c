#include <header.h>

int main_bench()
{
	int n,m,i,j;
	char zfc[1000][1000];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s",zfc[i]);
	}
    for(i=0;i<n;i++){
		m=strlen(zfc[i]);
		for(j=0;j<m-1;j++){
			if(zfc[i][j]=='A'){
				my_printf("T");
			}
            if(zfc[i][j]=='T'){
				my_printf("A");
			}
			if(zfc[i][j]=='C'){
				my_printf("G");
			}
			if(zfc[i][j]=='G'){
				my_printf("C");
			}
		}
        if(zfc[i][m-1]=='A'){
				my_printf("T\n");
			}
        if(zfc[i][m-1]=='T'){
				my_printf("A\n");
			}
	    if(zfc[i][m-1]=='C'){
				my_printf("G\n");
			}
	    if(zfc[i][m-1]=='G'){
				my_printf("C\n");
			}
		m=0;
	}
	return 0;
}