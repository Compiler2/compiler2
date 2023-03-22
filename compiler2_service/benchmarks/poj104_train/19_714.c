#include <header.h>

const long maxLenth=100;
const long maxwords=10000;

long n;
char word[maxwords+10][maxLenth+10];

char fw[maxLenth+10],tw[maxLenth+10];

main_bench(){
    long i,j,k;
    char a;    
    n=0;
    do{
	my_scanf("%s",word[++n]);
	a=getchar();
    }while(a!='\n');
    my_scanf("%s%s",fw,tw);
    for(i=1;i<=n;i++){
	if(strcmp(fw,word[i])==0)my_printf("%s",tw);
	else my_printf("%s",word[i]);
	if(i<n)my_printf(" ");
	else my_printf("\n");
    }
    
    return 0;
}
