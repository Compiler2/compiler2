#include <header.h>

int main_bench(){
	int i,n,len;
	int sum=0;
	char dw[1000][41];
	my_scanf("%d",&n);
    for(i=0;i<n;i++){
		my_scanf("%s",dw[i]);
		len=strlen(dw[i]);
	
		if(sum+len+1>80){
			my_printf("\n");
			sum=0;
		}else{
			if(i>0){
			   my_printf(" ");
			   sum++;
			}
		}
		my_printf("%s",dw[i]);	
		sum+=len;
	}
	return 0;
}