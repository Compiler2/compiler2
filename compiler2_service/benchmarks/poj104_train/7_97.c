#define NUM_ITER 851572

#include <header.h>

int main_bench()
{
	char str[256],sub[256],rep[256];
	
	int wz=-1;
	int len1,len2;
	int i,j,x;

	gets(str);
	gets(sub);
	gets(rep);
	len1=strlen(str);
	len2=strlen(sub);
	for(i=0;i<len1;i++){
		if(str[i]==sub[0]){
			x=1;
			wz=i;
			for(j=0;j<len2;i++,j++){
				if(sub[j]!=str[i]){
					x=0;
					i=wz;
					
					break;
				}
			}
			if(x!=0){
				break;
			}
		}
	}
	if(wz==-1){
		my_printf("%s",str);
	}
	else{
		for(i=0;i<wz;i++){
			my_printf("%c",str[i]);
		}
		my_printf("%s",rep);
		for(i+=len2;i<len1;i++){
			my_printf("%c",str[i]);
		}
	}
	my_printf("\n");
	return 0;
}