#define NUM_ITER 1164556

#include <header.h>

int main_bench(){
	char zxc[101];
	int i,j,t,k;
	int l;int s[100];
	gets(zxc);
	t=0;l=strlen(zxc);
k=0;	
	for(i=0;i<(l-1);i++){
		if(i==0){
			k=(zxc[i]-'0')*10+(zxc[i+1]-'0');
		}else{
		k=t*10+(zxc[i+1]-'0');
		}
		s[i]=k/13;
		t=k%13;
	
	}
	for(j=0;j<i;j++){
		if(j==0&&s[j]==0){
			continue;
		}
		my_printf("%d",s[j]);
	}
if(k<=12&&(i==1||i==0)){
my_printf("0");
if(k==0){
t=zxc[0]-'0';
}
}
	my_printf("\n");
	my_printf("%d",t);
return 0;
}