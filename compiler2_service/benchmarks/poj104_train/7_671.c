#define NUM_ITER 781654

#include <header.h>

int main_bench(){
    char a[256],b[256],c[100][50],x[256],d[256];
	int i,n1,n2,k,m,n,want=-1;
		my_scanf("%s%s%s",a,b,d);
	n1=strlen(a);
	n2=strlen(b);
	n=n1-n2+1;
	for(k=0;k<n;k++){
		m=k;
		for(i=0;i<n2;i++,m++){
		x[i]=a[m];
		}
		strcpy(c[k],x);
	}
	for(i=0;i<n;i++){
		if(strcmp(b,c[i])==0){
			want=i;
			break;
		}
	}
	if(want==0){
		my_printf("%s",d);
		for(i=n2;i<n1;i++){
			my_printf("%c",a[i]);
		}
	}
if(want==(n1-n2)){
	for(i=0;i<want;i++){
		my_printf("%c",a[i]);
	}
	my_printf("%s",d);
}
if(want>0&&want<(n1-n2)){
for(i=0;i<want;i++){
	my_printf("%c",a[i]);
}
	my_printf("%s",d);
    for(i=want+n2;i<n1;i++){
		my_printf("%c",a[i]);
	}
}
if(want==-1){
	my_printf("%s",a);
}
	return 0;
	}
