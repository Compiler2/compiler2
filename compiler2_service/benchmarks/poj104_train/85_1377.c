#include <header.h>



int main_bench(){
	int n,i,j=0,m=1;	
	my_scanf("%d",&n);

	char word[10000][22];
	for(i=0;i<n;i++){
		my_scanf("%s",word[i]);
	}
	for(i=0;i<n;i++){
		j=0;
		m=1;
		while(word[i][j]!='\0'){
			if(((word[i][j]=='_')
				||(word[i][j]>='a'&&word[i][j]<='z')
				||(word[i][j]>='A'&&word[i][j]<='Z')
				||((word[i][j]>='0')&&(word[i][j]<='9')&&(j>0)))){
				j++;

			}else{
				m=0;
				break;
				
			}
			
		}
		if(m==1){
			my_printf("yes\n");
		}else{
			my_printf("no\n");
		}
	}
	
	return 0;
}