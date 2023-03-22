#define NUM_ITER 23825

#include <header.h>


int main_bench()
{
	int n,i,j,len[1000];
	char s[1000][256];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s",s[i]);
	}
	for(i=0;i<n;i++){
		len[i]=strlen(s[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<len[i];j++){
			if(s[i][j]=='A')
				s[i][j]='T';
			else if(s[i][j]=='T')
				s[i][j]='A';
			else if(s[i][j]=='C')
				s[i][j]='G';
			else if(s[i][j]=='G')
				s[i][j]='C';
		}
	}
	for(i=0;i<n;i++){
    	my_printf("%s\n",s[i]);
	}
	return 0;
}
