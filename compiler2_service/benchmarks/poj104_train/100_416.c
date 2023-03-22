#include <header.h>

int main_bench()
{
	char s[301];
	int i,sum[26];
	my_scanf("%s",s);
	int len=strlen(s);
	for(i=0;i<26;i++){
		sum[i]=0;}
	for(i=0;i<len;i++){
		if(s[i]-'a'>=0&&s[i]-'a'<=25){

			sum[s[i]-'a']++;
		}
	}
	int hh=1;
	for(i=0;i<26;i++){
		if(sum[i]!=0) break;
	    else hh=0;}
	if(hh==0){ my_printf("No");}

	for(i=0;i<26;i++){
		if(sum[i]!=0) 
			my_printf("%c=%d\n",'a'+i,sum[i]);
	}

	return 0;
}

