#define NUM_ITER 977750

#include <header.h>


int main_bench(){
	int i,yiyang=0,zongliang=0,x;
	char lian1[501],lian2[501];
	double biaozhun,jieguo;
	my_scanf("%lf",&biaozhun);
	my_scanf("%s%s",&lian1,&lian2);
	for(i=0;lian1[i]!='\0'&&lian2[i]!='\0';i++){
		if((lian1[i]=='A'||lian1[i]=='C'||lian1[i]=='T'||lian1[i]=='G')&&(lian2[i]=='A'||lian2[i]=='C'||lian2[i]=='T'||lian2[i]=='G')){
			if(lian1[i]==lian2[i]){
				yiyang++;
			}
			zongliang++;
		}else{
			my_printf("error");
			x=99;
			break;
		}
	}
	if(lian1[zongliang]!='\0'||lian2[zongliang]!='\0'){
		if(x!=99){
		my_printf("error");
	}
		zongliang=0;
	}
	if(zongliang!=0){
	jieguo=1.0*yiyang/zongliang;
	if(jieguo>biaozhun){
		my_printf("yes");
	}else{
		my_printf("no");
	}
	}
	return 0;
}