#include <header.h>

int main_bench()
{
 	int n,i,k,l;
 	char ml[256],zl[256];
 	my_scanf("%d",&n);
 	for(i=1;i<=n+1;i++){
		gets(ml);
		l=strlen(ml);
		for(k=0;k<l;k++){
			if(ml[k]=='A') zl[k]='T';
			else if(ml[k]=='G') zl[k]='C';
			else if(ml[k]=='C') zl[k]='G';
			else if(ml[k]=='T') zl[k]='A';
			}
		for(k=0;k<l;k++){
			if(k<l-1) my_printf("%c",zl[k]);
			else my_printf("%c\n",zl[k]);
			}
		}
 	
    return 0;
}