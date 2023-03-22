#define NUM_ITER 22948

#include <header.h>

int main_bench()
{
	int n,i,j,p=0;
	char s[30];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s",s);
		int z=strlen(s);
		for(j=0;j<z;j++)
		{
			if(j==0&&(s[j]>'/'&&s[j]<':')){
				my_printf("no\n");
				break;}
			if(s[j]>'/'&&s[j]<':')
				p++;
			else 
				p+=0;
			if(s[j]>'@'&&s[j]<'[')
					p++;
			else 
				p+=0;
			if(s[j]>'a'&&s[j]<'z')
					p++;
			else 
				p+=0;
			if(s[j]=='a'||s[j]=='z')
					p++;
			else 
				p+=0;
			if(s[j]=='_')
					p++;
			else 
				p+=0;
			
		}
		
		
		if(p==z)
			my_printf("yes\n");
		else if(p!=0)
			my_printf("no\n");
		p=0;
	}
	return 0;
}
