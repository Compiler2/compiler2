#define NUM_ITER 28800

#include <header.h>


int main_bench()
{
    int n, i, j;
    my_scanf("%d", &n);
    for(i=0;i<n;i++){
    char s[255];
    my_scanf("%s", &s);
	  
    for(j=0;s[j];j++){
	     if(s[j]=='A')
		s[j]=s[j]-'A'+'T';
	     else if(s[j]=='T')
	         s[j]=s[j]-'T'+'A';
	     else if(s[j]=='C')
	         s[j]=s[j]-'C'+'G';
	     else if(s[j]=='G')
                  s[j]=s[j]-'G'+'C';
      }
	
         my_printf("%s\n", s);

   }
    return 0;

}