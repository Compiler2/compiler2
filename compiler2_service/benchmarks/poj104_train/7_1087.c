#include <header.h>

int main_bench(){
	char st[351],su[351],re[551],reh[551];
	int a,b,c,e,r,lu,lr;
	
	my_scanf("%s",st);
	my_scanf("%s",su);
	my_scanf("%s",re);
	r=-1;
	for(a=0;a<strlen(st);a++){
		e=1;
		for(b=0;b<strlen(su);b++){
			if(st[a+b]!=su[b]){
				e=0;
			}
		}
		if(e){
			r=a;
		
			break;
		}
	}
	if(r+1){
	for(a=0;a<r;a++){
		reh[a]=st[a];
	}
	for(a=0;a<strlen(su);a++){
		reh[r+a]=re[a];
	}
	lu=strlen(su);
	lr=strlen(re);
	for(a=r+lu;a<=530;a++){
		reh[lr+a-lu]=st[a];
	}
	
	
				my_printf("%s",reh);
			
	}
	else{
		my_printf("%s",st);
	}
	return 0;
}

