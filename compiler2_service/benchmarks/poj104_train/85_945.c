#define NUM_ITER 31426

#include <header.h>

int main_bench(){
int n,t;
char a[50];

my_scanf("%d",&n);
for(int i=0;i<n;i++){
	my_scanf("%s",a);
	t=1;
	if((a[0]<'A'||a[0]>'Z')&&(a[0]<'a'||a[0]>'z')&&a[0]!='_'){
		t=0;
	}
	for(int j=1;j<strlen(a);j++){
		if((a[j]<'A'||a[j]>'Z')&&(a[j]<'a'||a[j]>'z')&&a[j]!='_'&&(a[j]<'0'||a[j]>'9')){
			t=0;
			break;
		}
	}
	if(t==0){
		my_printf("no\n");
	}
	else if(t==1){
		my_printf("yes\n");
	}
}






return 0;
}