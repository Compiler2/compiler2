#define NUM_ITER 35200

#include <header.h>

int main_bench(){
    int n,i,j;
    char sz[21];
	my_scanf("%d\n",&n);
	for(i=0;i<n;i++){
		gets(sz);
		if((sz[0]=='_')||(sz[0]>='a'&&sz[0]<='z')||(sz[0]>='A'&&sz[0]<='Z')){
			for(j=1;sz[j]=='_'||(sz[j]>='a'&&sz[j]<='z')||(sz[j]>='A'&&sz[j]<='Z')||(sz[j]>='0'&&sz[j]<='9');j++){
				j=j;
			}
			if(sz[j]=='\0'){
				my_printf("yes\n");
			}
			else{
				my_printf("no\n");
			}
		}
		else{
			my_printf("no\n");
		}
	}
	return 0;
}