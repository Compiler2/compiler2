#define NUM_ITER 28662

#include <header.h>

int main_bench()
{
int n,k,i;
char word[50][100];
my_scanf("%d",&n);
for(i=0;i<n;i++){
	my_scanf("%s",word[i]);}
for(i=0;i<n;i++){
	if((word[i][strlen(word[i])-2]=='e')||(word[i][strlen(word[i])-2]=='l')){
word[i][strlen(word[i])-2]='\0';
}
	else{word[i][strlen(word[i])-3]='\0';}}
for(i=0;i<n;i++){
	my_printf("%s\n",word[i]);}

	return 0;
		
	}
