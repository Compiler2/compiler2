#define NUM_ITER 1035453

#include <header.h>

int main_bench()
{
	char a1[50],a2[50];
	int i,j,m=0;
	my_scanf("%s %s",a1,a2);
	for(i=0;a1[i]!='\0';i++){
		for(j=0;a2[j]!='\0';j++){
			if(a1[i]==a2[j]){
				my_printf("%d",j);
				m++;
			}
			if(m==1){
				break;
			}
		}
	}
	return 0;
}

