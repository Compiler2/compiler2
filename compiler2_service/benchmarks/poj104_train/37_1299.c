#define NUM_ITER 4

#include <header.h>

int main_bench(){
	int n,i,j,k,m,b[100000],x;
	char a[100000],c;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		if(i==0){
		my_scanf("%c",&c);
		}
		gets(a);
        m=strlen(a);
        for(j=0;j<100000;j++){
		    b[j]=0;
		}
		for(j=0;j<m;j++){
			for(k=0;k<m;k++){
                if(a[j]==a[k]){
                   b[j]++;
				}
			}
		}
		x=0;
		for(j=0;j<m;j++){
			if(b[j]==1){
				my_printf("%c\n",a[j]);
                x=1;
				break;
			}
		}
		if(x==0){
			my_printf("no\n");
		}
	}
	return 0;
}