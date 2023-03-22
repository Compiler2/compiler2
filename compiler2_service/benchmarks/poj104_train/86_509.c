#include <header.h>

int main_bench()
{
    int n,i,j,k;
	my_scanf("%d",&n);
	int a[100],b[100];
	int c[100][100];
	for(i=0;i<n;i++){
		my_scanf("%d",&k);
		
		for(j=0,a[i]=60;j<k;j++){

			my_scanf("%d",&c[i][j]);
		b[i]=c[i][j]+3*j+3;
	
		if(b[i]<=60){
			a[i]-=3;}
		 else if(b[i]>=63){
			a[i]=a[i];}
		else{
			a[i]=c[i][j];}
		}
	my_printf("%d\n",a[i]);
	}
	return 0;
}
