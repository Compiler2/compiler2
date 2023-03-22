#define NUM_ITER 820682

#include <header.h>

int main_bench(){
	char a[1000],b[100],mid;
	int i,num[1000]={0},j,l1,l2,judge,count;
	count=0;
	gets(a);
	l1=strlen(a);
	for(i=0;i<l1;i++){
		if(a[i]!=' '){
			num[count]++;
		}else if(a[i]==' '&&a[i+1]!=' '){
			count++;
		}
	}
	for(i=0;i<=count;i++){
		my_printf("%d",num[i]);
		if(i!=count){
			my_printf(",");
		}
	}
	return 0;
}