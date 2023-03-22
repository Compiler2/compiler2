#include <header.h>

int main_bench()
{
	int n,i,j,len;
	char zf[21];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s",zf);
		len=strlen(zf);
		for(j=0;j<len;j++){
			if(j==0){
				if((zf[j]<'a'||zf[j]>'z')&&zf[j]!='_'){
					if(zf[j]<'A'||zf[j]>'Z'){
						my_printf("no\n");
						break;
					}
				}
			}else{
				if((zf[j]<'a'||zf[j]>'z')&&zf[j]!='_'){
					if(zf[j]<'A'||zf[j]>'Z'){
						if(zf[j]<'0'||zf[j]>'9'){
							my_printf("no\n");
							break;
						}
					}
				}
			}
		}
		if(j==len)
			my_printf("yes\n");
	}
	return 0;
}
