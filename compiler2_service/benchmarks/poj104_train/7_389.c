#define NUM_ITER 913691

#include <header.h>

int main_bench(){
	int i,j,h=0;
	char a[100],b[100],c[100];
	my_scanf("%s%s%s",a,b,c);
	for(i=0;i<strlen(a);i++){
		if(a[i]==b[0]){
			h=0;
			for(j=0;j<strlen(b);j++){
				if(a[j+i]==b[j]){
					h++;
				}
			}
			if(h==strlen(b)){
				for(j=0;j<strlen(c);j++){
					a[j+i]=c[j];
				}
				break;
			}
		}
	}
	my_printf("%s\n",a);
	return 0;
}

