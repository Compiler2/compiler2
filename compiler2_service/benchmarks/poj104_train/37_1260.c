#include <header.h>

int main_bench(){
	int n,i,j,k,sum,len;
	my_scanf("%d",&n);
	char a[100];
	for(i=0;i<n;i++){
		my_scanf("%s",a);
		len=strlen(a);
		for(j=0;j<len;j++){
			sum=0;
			for(k=0;k<len;k++){
				if(a[j]==a[k]){
					sum++;
                                      }
                             }
			if(sum==1){
				my_printf("%c\n",a[j]);
				break;
                             }
                   }
                   if(sum!=1){
                                  my_printf("no\n"); 
                             } 
                    
          }
  return 0; 
} 