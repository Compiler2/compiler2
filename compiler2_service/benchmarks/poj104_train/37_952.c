#define NUM_ITER 35629

#include <header.h>

int main_bench(){
	int n,i,j,l,num;
	char zf[1000];
	my_scanf("%d",&n);
	for(l=1;l<=n;l++){
		my_scanf("%s",&zf);
	    for(j=0;zf[j]!='\0';j++){
			num=0;
			for(i=0;zf[i]!='\0';i++){
				if(zf[i]==zf[j]){
					num++;
				}
			}
			if(num==1){
				my_printf("%c\n",zf[j]);
				break;
			}
		}
		if(zf[j]=='\0'){
			my_printf("no\n");
		}
	}
	return 0;
}