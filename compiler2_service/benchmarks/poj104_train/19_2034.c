#define NUM_ITER 818616

#include <header.h>

int main_bench()
{
	char words[200],a[100],b[100],word[100][100];
	int n,k,j=0,i;
	gets(words);
	gets(a);
	gets(b);
	n=strlen(words);
    for(i=0,k=0;i<n+1;i++){
		if(words[i]==' '||words[i]=='\0'){
           word[k][j]='\0';
		   k++;
		   j=0;
		}
		else{
           word[k][j]=words[i];
		   j++;
		}
	}

    for(i=0;i<k-1;i++){
		if(strcmp(word[i],a)==0)
			my_printf("%s ",b);
		 else my_printf("%s ",word[i]);
	}
  
   	if(strcmp(word[i],a)==0)
		my_printf("%s",b);
    else my_printf("%s",word[i]);
	return 0;
}