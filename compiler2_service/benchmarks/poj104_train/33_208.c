#include <header.h>

int main_bench(){
	int n,i,j;
	char p[1000][256],p1[1000][256];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s",p[i]);
		for(j=0;p[i][j]!='\0';j++){
			switch(p[i][j])
			{
			    case'A':
				     p1[i][j]='T';
				     break;
			    case'T':
				     p1[i][j]='A';
				     break;
				case'C':
					p1[i][j]='G';
					break;
				case'G':
					p1[i][j]='C';
					break;
			}
		}
		my_printf("%s\n",p1[i]);
	}



	
	

	return 0;
}