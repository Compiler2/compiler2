#include <header.h>

           
int main_bench()
{
    int len,n,i,j; 
	my_scanf("%d",&n);
    char s[33];               
    for (i = 0; i < n; i++) {
		my_scanf("%s",&s);
		len=strlen(s);
		for(j=0;j<len;j++){
			if(s[j]=='e'&&s[j+1]=='r'&&s[j+2]=='\0'){
			s[j]='\0';
			}
			else if(s[j]=='l'&&s[j+1]=='y'&&s[j+2]=='\0'){
			s[j]='\0';
			}
			else if(s[j]=='i'&&s[j+1]=='n'&&s[j+2]=='g'&&s[j+3]=='\0'){
			s[j]='\0';
			}
		}
		my_printf("%s\n",s);
    }

	

    return 0;
}

