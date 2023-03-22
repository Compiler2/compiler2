#include <header.h>

int main_bench(){
	int len,len2,start,end,judge,i,p;
	char input[500],sample[500];
	gets(input);
	len=strlen(input);
	for(len2=2;len2<=len;len2++){
		for(start=0;start<=len-len2;start++){
			judge=1;
			end=start+len2-1;
			for(i=start;i<=end;i++){if(input[i]!=input[end+start-i]){judge=0;}}
			if(judge==1){
				for(i=start;i<=end;i++){my_printf("%c",input[i]);}
				my_printf("\n");			
			}}}
return 0;
}