#include <header.h>

int main_bench()
{
	int n,a,i,j;
	char dc[52];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s",dc);
		a=strlen(dc);
		if(dc[a-1]=='r'||dc[a-1]=='y'){
			for(j=0;j<a-2;j++){
				if(j<a-3)
					my_printf("%c",dc[j]);
				else
					my_printf("%c\n",dc[j]);				
			}
		}
		else if(dc[a-1]=='g'){
			for(j=0;j<a-3;j++){
				if(j<a-4)
					my_printf("%c",dc[j]);
				else
					my_printf("%c\n",dc[j]);
			}
		}					
	}
	return 0;
}
