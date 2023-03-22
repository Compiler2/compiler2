#include <header.h>

int main_bench()
{
    int n,i,j,len;
	my_scanf("%d",&n);
	char DNA[256];
    for(i=0;i<n;i++){
		my_scanf("%s",DNA);
		len=strlen(DNA);
		for(j=0;j<len;j++){
			if(DNA[j]=='A')
				DNA[j]='T';
			else if(DNA[j]=='T')
				DNA[j]='A';
			else if(DNA[j]=='C')
				DNA[j]='G';
			else if(DNA[j]=='G')
				DNA[j]='C';
		}
		my_printf("%s\n",DNA);
	}
	return 0;
}
