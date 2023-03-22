#define NUM_ITER 28872

#include <header.h>

int main_bench(){
int n,len;
my_scanf("%d",&n);
char a[100][20],b[20];
int i,k,flag;
for(i=0;i<n;i++){
	my_scanf("%s",a[i]);
}
for(i=0;i<n;i++){
	strcpy(b,a[i]);
	flag=1;

	len=strlen(b);
    if((b[0]>='A'&&b[0]<='Z')||(b[0]>='a'&&b[0]<='z')||(b[0]=='_')){
		for(k=1;k<len;k++){
			if((b[k]>='A'&&b[k]<='Z')||(b[k]>='a'&&b[k]<='z')||(b[k]=='_')||(b[k]>='0'&&b[k]<='9')){
              flag=1;
			}else{
				flag=0;
				break;
			}
		}
		if(flag==0){
			my_printf("no\n");
		}else{
			my_printf("yes\n");
		}
	}else{
		my_printf("no\n");
	}
}
	return 0;
}