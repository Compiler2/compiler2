#define NUM_ITER 32672

#include <header.h>

int main_bench(){
    int n,i,k=0,M=-1,j;
	char a[1000][100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%s",a[i]);
	while(1){
		for(j=k;j<n;j++){
			M+=strlen(a[j])+1;
			if(j==k)
				my_printf("%s",a[j]);
			else if(M<81)
				my_printf(" %s",a[j]);
			else{
				my_printf("\n");
				M=-1;
				k=j;
				break;
			}
		}
		if(j==n)
			break;
	}
	return 0;
}