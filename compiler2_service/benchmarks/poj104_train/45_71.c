#define NUM_ITER 1024274

#include <header.h>

int main_bench(){
	char a[50],b[50];
	my_scanf("%s %s",a,b);
	int i,j,cnt=0;
	int n;
	n=strlen(a);
	for(i=0;b[i]!='\0';i++){
		for(j=0;j<n;j++){
			if(a[j]==b[i+j]){
				cnt++;
			}
		}
		if(cnt==n){
			my_printf("%d",i);
			break;
		}
		else cnt=0;
	}

return 0;
}