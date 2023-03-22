#include <header.h>


int main_bench()
{
	int i,j,n,m;
	char word[20];

	my_scanf("%d",&n);
    for(i=0;i<n;i++){
		my_scanf("%s",word);
		m=strlen(word);
		if(((word[m-1]=='r')&&(word[m-2]=='e'))||((word[m-1]=='y')&&(word[m-2]=='l'))){
			m-=2;
		}
		else if((word[m-1]=='g')&&(word[m-2]=='n')&&(word[m-3]=='i')){
				m-=3;
		}
		
		for(j=0;j<m;j++){
			my_printf("%c",word[j]);
		}
			my_printf("\n");
	}
	return 0;
}
