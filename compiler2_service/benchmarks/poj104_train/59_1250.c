#define NUM_ITER 20

#include <header.h>

int main_bench(){
	char c[102][102]={' '};
	int i,j,n,m,r=0,k=1;
	my_scanf ("%d\n",&n);

	for (i=1;i<=n;i++){
	    for (j=1;j<=n;j++){
			  my_scanf ("%c\n",&c[i][j]);
		}
	}
	
	
	my_scanf ("%d",&m);
	
	

	while (k<=m){
    for  (i=1;i<=n;i++){
	    for (j=1;j<=n;j++){
			if (c[i][j]==','){
				c[i][j]='@';
			}
		}
	}
    for  (i=1;i<=n;i++){
	    for (j=1;j<=n;j++){
			if (c[i][j]=='@') {
				if (c[i-1][j]=='.')  c[i-1][j]=',';
				if (c[i+1][j]=='.')  c[i+1][j]=',';
				if (c[i][j-1]=='.')  c[i][j-1]=',';
				if (c[i][j+1]=='.')  c[i][j+1]=',';
					
			}   
		}
	}
	k++;
	}
	for (i=1;i<=n;i++){
		for (j=1;j<=n;j++){
			if (c[i][j]=='@') {
				r++;
				
			}
			;
		}
	}
	my_printf ("%d",r);
	return 0;
}