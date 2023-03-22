#define NUM_ITER 734

#include <header.h>

int main_bench()
{
	char zfc[256];
	char zfcsc[256];
	int  n;
	char a='A',t='T',g='G',c='C';

	my_scanf("%d",&n);
	for(int i=0;i<n;i++){
		my_scanf("%s",&zfc);
		for(int j=0;j<256;j++){
			if(zfc[j]==a){
				zfcsc[j]=t;
			}
			else if(zfc[j]==t){
				zfcsc[j]=a;
			}
			else if(zfc[j]==g){
				zfcsc[j]=c;
			}
			else if(zfc[j]==c){
				zfcsc[j]=g;
			}
			else  if(zfc[j]=='\0'){
				zfcsc[j]='\0';
			}
		}
		my_printf("%s\n",zfcsc);
	}
	return 0;
}
