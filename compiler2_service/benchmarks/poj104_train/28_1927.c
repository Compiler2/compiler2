#define NUM_ITER 1301148

#include <header.h>

int main_bench(){
	char a[10000];
	int s,t=0;
	int n,i;
	gets(a);
	n=strlen(a);
	for(i=0;i<n;i++){
		if(a[i]!=' '){
			s=0;
			while(1){
				s++;
				i++;
				if(a[i]==' '||i>=n)
					break;
			}
			if(t==0){
				t++;
			    my_printf("%d",s);
			}
			else
				my_printf(",%d",s);
		}
	}
    return 0;
}