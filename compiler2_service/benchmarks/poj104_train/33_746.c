#include <header.h>

int main_bench(){
char s[256];
int n,i,j;
my_scanf("%d",&n);getchar();
 for(j=0;j<n;j++){ 
	gets(s);
    for(i=0;i<strlen(s);i++){
         if(s[i]=='T'){my_printf("A");}
         if(s[i]=='A'){my_printf("T");}
         if(s[i]=='G'){my_printf("C");}
         if(s[i]=='C'){my_printf("G");}
	}
 my_printf("\n");
 }
return 0;
}