#define NUM_ITER 28809

#include <header.h>

int main_bench(){
	char zfc[22];
	int n,a[100]={0};
	my_scanf("%d",&n);
	for(int j=0;j<n;j++){
		my_scanf("%s",zfc);
		int len=strlen(zfc);
	for(int i=0;i<len;i++){
		if(i==0&&(zfc[i]>='0'&&zfc[i]<='9')){
			a[j]=0;
			break;
		}
		if(zfc[i]>='A'&&zfc[i]<='Z'||zfc[i]>='a'&&zfc[i]<='z'||zfc[i]=='_'||zfc[i]>='0'&&zfc[i]<='9'){
		}else{
			a[j]=0;
			break;
		}
		if(i==len-1){
			a[j]=1;
		}
	}
	}
	for(int i=0;i<n;i++){
		if(a[i]==0) my_printf("no\n");
		else my_printf("yes\n");
	}	
	return 0;
}