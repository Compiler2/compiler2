#define NUM_ITER 1099766

#include <header.h>


char a[100]={0};
char b[100]={0};
int main_bench(){
	int i,j;
	char e;
	my_scanf("%s",a);
	my_scanf("%s",b);
	for(i=0;i<strlen(a);i++){
		if(a[i]!=b[i]){
			for(j=i+1;j<strlen(a);j++){
				if(a[j]==b[i]){
					e=a[j];
					a[j]=a[i];
					a[i]=e;
				}
			}
		}
		if(a[i]!=b[i]){
			my_printf("NO");
			break;
		}
	}
	if(!strcmp(a,b)) my_printf("YES");
	else{
		if(i==strlen(a)) my_printf("NO"); 
	}
	return 0;	
}
