#include <header.h>

int main_bench()
{
    char s[20];
	int n,i,j;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
    my_scanf("%s",s);
	for(j=0;s[j]!='\0';j++){
		if(j==0){
    if((s[j]>='A'&&s[j]<='Z')||(s[j]>='a'&&s[j]<='z')||s[j]=='_')
	{
		if(s[j+1]=='\0')
		    	my_printf("yes\n");
		continue;
	}
    else{
			my_printf("no\n");
		break;
	}
		}
        else
		{
    if((s[j]>='A'&&s[j]<='Z')||(s[j]>='0'&&s[j]<='9')||(s[j]>='a'&&s[j]<='z')||s[j]=='_')
	{
		if(s[j+1]=='\0')
		    	my_printf("yes\n");
		continue;
	}
    else{
			my_printf("no\n");
		break;
	}
		}
	}
	}

   return 0;
}

