#define NUM_ITER 36

#include <header.h>


int main_bench(){
	int t,i,j,len,judge;
	char string[10000];
	my_scanf("%d",&t);
	while(t--){
		for(i=0;i<10000;i++){
			string[i]='\0';
		}
		my_scanf("%s",&string);
		len=strlen(string);
		for(i=0;i<len;i++){
			judge=0;
			for(j=i+1;j<len;j++){
				if(string[i]==string[j]){
					string[j]='A';
					judge=1;
				}
			}
			if(judge){
				string[i]='A';
			}
		}
		for(i=0;i<len;i++){
			if(string[i]!='A'){
				my_printf("%c\n",string[i]);
				break;
			}else if(i==len-1){
				my_printf("no\n");
				break;
			}
		}
	}
}