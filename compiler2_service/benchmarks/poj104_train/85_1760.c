#include <header.h>

int main_bench() {
	int n,i,a,b;
	char zfc[21];
	my_scanf("%d",&n);
	while(n!=0){
		my_scanf("%s",zfc);
		if((zfc[0]>='a' && zfc[0]<='z')||(zfc[0]>='A' && zfc[0]<='Z')||(zfc[0]=='_')){
			a=1;
		}else{a=0;}
		if(a==1){
			for(i=1;zfc[i]!='\0';i++){
				if((zfc[i]>='a' && zfc[i]<='z')||(zfc[i]>='A' && zfc[i]<='Z')||(zfc[i]=='_')||(zfc[i]>='0' && zfc[i]<='9')){
					b=1;
				}else{
					b=0;
					break;
				}
			}
		}
		if(a==1 && b==1){my_printf("yes\n");}
		else if(a==0 || (a==1 && b==0)){my_printf("no\n");}
		n--;
	}
	return 0;
}
