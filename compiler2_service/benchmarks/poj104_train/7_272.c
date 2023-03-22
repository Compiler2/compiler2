#include <header.h>

int main_bench(){
	int i,k,m,p,e ;
	char sz[1000],sf[1000],sc[1000];
	gets(sz);
	gets(sf);
	gets(sc);
	int len=strlen(sz);
	int len1=strlen(sf);
	for(i=0;i<len;i++){
		e=0;
        if(sz[i]==sf[0]){
	for(k=0;k<len1;k++){
		if(sz[i+k]==sf[k]){
			e++;
		}
	}
	
	if(e==len1){
for(m=0;m<i;m++){
	my_printf("%c",sz[m]);
}
my_printf("%s",sc);
for(p=i+len1;p<len;p++){
	my_printf("%c",sz[p]);
}
	
break;}
		}
		}
	if(e!=len1){
		my_printf("%s",sz);}
		return 0;
}
			


