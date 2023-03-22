#define NUM_ITER 27381

#include <header.h>

int main_bench(){
	int n,d;
	char a[100][21];
	my_scanf("%d",&n);
	for(int i=0;i<n;i++){
		my_scanf("%s",a[i]);
	}
	for(int k=0;k<n;k++){
		for(int j=0;j<' ';j++){
            d=strlen(a[k]);
			if((a[k][j]>='a'&&a[k][j]<='z')||(a[k][j]>='0'&&a[k][j]<='9')||(a[k][j]=='_')||(a[k][j]>='A'&&a[k][j]<='Z')||a[k][j]=='0'){
				if(j==0){
					if(a[k][j]>='0'&&a[k][j]<='9'){
						my_printf("no\n");
						break;
					}
				}
			}else{
				my_printf("no\n");
				break;
			}
		if(j==d-1){
			   my_printf("yes\n");
			   break;
			}
		}
	}
	return 0;
}