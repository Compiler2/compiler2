#include <header.h>

int main_bench()
{
    char s[33],r[33];
	int i,n,j,l;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s",s);
		l=strlen(s);
        for(j=0;s[j];j++){
			r[j]=s[j];
		}
		for(j=0;s[j];j++){
			if(s[j]=='e'&&s[j+1]=='r'&&j==l-1-1)
				r[j]='\0';
			if(s[j]=='l'&&s[j+1]=='y'&&j==l-1-1)
				r[j]='\0';
			if(s[j]=='i'&&s[j+1]=='n'&&s[j+2]=='g'&&j==l-1-2)
				r[j]='\0';
		}
		my_printf("%s\n",r);
	}
	return 0;
}