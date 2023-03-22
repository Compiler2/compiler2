#include <header.h>

int main_bench()
{
	char str[100];
    int m,k;
	my_scanf("%d",&m);
	int n;
	for(k=0;k<m;k++){
		n=0;
		my_scanf("%s",str);
		n=strlen(str);
		if(str[n-2]=='e'&&str[n-1]=='r'){
			str[n-2]='\0';
			my_printf("%s\n",str);
		}
		else if(str[n-1]=='y'&&str[n-2]=='l'){
            str[n-2]='\0';
			my_printf("%s\n",str);
		}
		else if(str[n-1]=='g'&&str[n-2]=='n'&&str[n-3]=='i'){
			str[n-3]='\0';
            my_printf("%s\n",str);
		}
		else{
            my_printf("%s\n",str);
		}
	}
	return 0;
}