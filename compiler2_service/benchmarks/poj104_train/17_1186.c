#define NUM_ITER 21157

#include <header.h>


int main_bench(){
	int n,i,j,k,len,e;
	char s[102];
	my_scanf("%d",&n);
	for(k=0;k<n;k++)
	{
		my_scanf("%s",&s);
		len=strlen(s);
		my_printf("%s\n",s);
		for(j=0;j<len;j++){
			if(s[j]!='(' && s[j]!=')'){s[j]=' ';}
		}
		for(i=len-1;i>=0;i--){
			if(s[i]=='('){
				for(e=i+1;e<len;e++){
					if(s[e]==')'){
						s[i]=' ';s[e]=' ';break;}
				}
			}
		}
		for(j=0;j<len;j++){
			if(s[j]=='('){s[j]='$';}
			if(s[j]==')'){s[j]='?';}
		}
        my_printf("%s\n",s);
	}
	return 0;
}