#define NUM_ITER 35579

#include <header.h>

int main_bench(){
	int n,i,j,k,b;
	my_scanf("%d",&n);
	char a[100000];
	
	for (i=0;i<n;i++){
		my_scanf("%s",&a);
		for(j=0;a[j]!='\0';j++){
			b=1;
			for(k=0;a[k]!='\0';k++){
				if(j==k){
					continue;
				}else{
				    if(a[j]-a[k]==0){
					    b=0;
					    break;
					}
				}
			}
			if(b==1){
			    my_printf("%c\n",a[j]);
			    break;
			}
		}
		if(b==0){
			my_printf("no\n");
		}
	}
	
	return 0;
}
