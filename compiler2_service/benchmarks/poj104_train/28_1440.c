#define NUM_ITER 1116035

#include <header.h>

int main_bench(){
   char zf[800],dc[300][20];
   gets(zf);
   int n=strlen(zf),a=0,b=0;
    for(int i=0;i<n+1;i++){
		if(zf[i]!=' '){
			dc[a][b]=zf[i];
			b++;
		}else{
			dc[a][b]='\0';
			for(;zf[i]==' ';i++){
				continue;
			}
			a++;
			b=0;
		}
	}
	my_printf("%d",strlen(dc[0]));
	for(int c=1;c<a+1;c++){
	     my_printf(",%d",strlen(dc[c])+1);
	}
	return 0;
}