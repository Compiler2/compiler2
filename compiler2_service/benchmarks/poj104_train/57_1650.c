#define NUM_ITER 21158

#include <header.h>

int main_bench()
{
	int n,i,j,m;
	my_scanf("%d",&n);
	char s[50];
	for(i=0;i<=n;i++){
		gets(s);
		m=strlen(s);
		for(j=m-1;m>=0;m--){
			if(s[m-1]=='r'||s[m-1]=='y'){
				s[m-2]='\0';break;
			}else if(s[m-1]=='g'){
				s[m-3]='\0';break;
		}}
                    my_printf("\n");my_printf("%s",s);
	}
				

	
	return 0;
}