#include <header.h>

int main_bench(){
	char yuanchuan[257];
	char zichuan[257];
	char replacement[257];
	int i,j,k;
	int len1,len2;
	my_scanf("%s%s%s",yuanchuan,zichuan,replacement);
	len1=strlen(yuanchuan);
	len2=strlen(zichuan);
	k=len1;
	for(i=0;i<len1-len2+1;i++){
		for(j=0;j<len2;j++){
			if(yuanchuan[i+j]!=zichuan[j]){
				break;
			}
			if(j==len2-1){
				k=i;
			}
		}
		if(k!=len1){
			break;
		}
	}
	if(k==len1){
		my_printf("%s",yuanchuan);
	}else{
	    for(i=0;i<k;i++){
		    my_printf("%c",yuanchuan[i]);
		}
	    my_printf("%s",replacement);
		for(i=k+len2;i<len1;i++){
			my_printf("%c",yuanchuan[i]);
		}
	}
	return 0;
}