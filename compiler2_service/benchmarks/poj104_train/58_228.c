#define NUM_ITER 21947

#include <header.h>


int panduan(char a){
	int result=0;
	if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a>='0'&&a<='9')||(a=='_'))
		 result=1;
	return result;
}
int first(char b){
	int result=0;
	if((b>='a'&&b<='z')||(b>='A'&&b<='Z')||(b=='_'))
		result=1;
	return result;
}
int main_bench()
{
	int i,n,j,len,flag;
	int panduan(char a);
	int first(char b);
	char s[81];
	my_scanf("%d\n",&n);
	for(i=0;i<n;i++){
		gets(s);
		len=strlen(s);
		flag=1;
		if(first(*s)==0)
			flag=0;
		else if(first(*s)==1){	
			for(j=1;j<len;j++){
				if(panduan(*(s+j))==0){
				flag=0;
				break;
				}
			}
		}
		if(flag==1){
			my_printf("1\n");
		}
		else{
			my_printf("0\n");
		}
	}
	return 0;
}
