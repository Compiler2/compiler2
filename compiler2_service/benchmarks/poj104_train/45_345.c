#include <header.h>

int main_bench(){
	char a[100],b[100];
	int i,j,la=0,lb=0,judge;
	my_scanf("%s",b);
	my_scanf("%s",a);
	for (i=1;a[i]!='\0';i++){
		la++;
	}
	for (i=1;b[i]!='\0';i++){
		lb++;
	}
	for (i=0;i<=la-lb;i++){
		if (a[i]==b[0]){
			judge=1;
			for (j=1;j<=lb-1;j++){
				if (a[i+j]!=b[j]){
					judge=0;
					j=lb+100;
				}
			}
			if (judge==1){
				my_printf("%d",i);
				i=la+100;
			}
		}
	}
	return 0;
}
					