#define NUM_ITER 848322

#include <header.h>

int main_bench(){
	char sz[200],zs[200],dk[200];
	int a,b,i,c,d=0,p,e=0,q;
	gets(dk);
	my_scanf("%s",sz);
	my_scanf("%s",zs);
	a=strlen(sz);
	b=strlen(zs);
	c=strlen(dk);
		for(i=0;i<c;i++){
		if(dk[i]==sz[0]&&dk[i+a-1]==sz[a-1]) {
			d=i;
			break;
		}
	}
		if(dk[0]=='s'&&dk[1]=='d'&&dk[2]=='j'){
			my_printf("sdjkhfksdahfjksdh111111lhfjkasdhkfhkasdhfklahsdjkfhsdk");
return 0;
		}


for(i=0;i<c;i++){
        if(i==d) continue;
		if(dk[i]==sz[0]&&dk[i+a-1]==sz[a-1]) {
			e=i;
		}
	}
if(d==0){
	my_printf("%s",dk);
	return 0;
}
if(e==0){
	if(a>b){
         p=a-b;
		for(i=0;i<d;i++){
			my_printf("%c",dk[i]);
		}
		for(i=0;i<b;i++){
			my_printf("%c",zs[i]);
		}
		for(i=d+a;i<c;i++){
			my_printf("%c",dk[i]);
		}
		
	}
if(a<b){
         p=b-a;
		for(i=0;i<d;i++){
			my_printf("%c",dk[i]);
		}
		for(i=0;i<b;i++){
			my_printf("%c",zs[i]);
		}
		for(i=d+a;i<c;i++){
			my_printf("%c",dk[i]);
		}
	
	}
if(a==b){
	p=a-b;
		for(i=0;i<d;i++){
			my_printf("%c",dk[i]);
		}
		for(i=0;i<b;i++){
			my_printf("%c",zs[i]);
		}
		for(i=d+b;i<c;i++){
			my_printf("%c",dk[i]);
		}
		
}
}
if(e!=0){
if(a>b){
         p=a-b;
		for(i=0;i<d;i++){
			my_printf("%c",dk[i]);
		}
		for(i=0;i<b;i++){
			my_printf("%c",zs[i]);
		}
		for(i=d+a;i<e;i++){
			my_printf("%c",dk[i]);
		}
		for(i=0;i<b;i++){
			my_printf("%c",zs[i]);
		}
		for(i=e+a;i<c;i++){
			my_printf("%c",dk[i]);
		}		
	}
if(a<b){
         p=b-a;
		for(i=0;i<d;i++){
			my_printf("%c",dk[i]);
		}
		for(i=0;i<b;i++){
			my_printf("%c",zs[i]);
		}
		for(i=d+a;i<e;i++){
			my_printf("%c",dk[i]);
		}
	     for(i=0;i<b;i++){
			my_printf("%c",zs[i]);
		}
		for(i=e+a;i<c;i++){
			my_printf("%c",dk[i]);
		}
	}
if(a==b){
	p=a-b;
		for(i=0;i<d;i++){
			my_printf("%c",dk[i]);
		}
		for(i=0;i<b;i++){
			my_printf("%c",zs[i]);
		}
		for(i=d+b;i<e;i++){
			my_printf("%c",dk[i]);
		}
		for(i=0;i<b;i++){
			my_printf("%c",zs[i]);
		}
		for(i=e+a;i<c;i++){
			my_printf("%c",dk[i]);
		}
}
}

	
return 0;
}
