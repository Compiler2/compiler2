#define NUM_ITER 30699

#include <header.h>

int main_bench(){
	int n;
	int i,j;
	char a[32];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
	    my_scanf("%s",&a);
	    int num=strlen(a);
		if(((a[num-2]=='e')&&(a[num-1]=='r'))||((a[num-2]=='l')&&(a[num-1]=='y'))){
			for(j=0;j<num-2;j++){
				my_printf("%c",a[j]);
			}
			my_printf("\n");
		}else if((a[num-3]=='i')&&(a[num-2]=='n')&&(a[num-1]=='g')){
			for(j=0;j<num-3;j++){
				my_printf("%c",a[j]);
			}
			my_printf("\n");
		}else{
			my_printf("%s\n",a);
		}
	}
    return 0;
}
