#define NUM_ITER 1074219

#include <header.h>

int main_bench(){
	int i,j,length;
	char a[200];
	char b[200];
	my_scanf("%s %s",a,b);
    if(strlen(a)!=strlen(b)) {
		my_printf("NO");
		return 0;
	}
	length=strlen(a);
    for(i=0;i<length;i++){
		for(j=0;j<length;j++){
			if(a[i]==b[j]){ 
				b[j]='\0';
				break;	
			}		
		}
		if(j==length){
			my_printf("NO");
			return 0;
		}
	}
	my_printf("YES");
	return 0;
}