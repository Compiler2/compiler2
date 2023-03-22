#include <header.h>

int main_bench(){
int n,i,l,j;
char s[300];
my_scanf("%d",&n);
for(i=0;i<n;i++){
my_scanf("%s",s);
l=strlen(s);
for(j=0;s[j]!='\0';j++){
	if(j==l-1){
if(s[j]=='A') my_printf("T\n");
if(s[j]=='T') my_printf("A\n");
if(s[j]=='C') my_printf("G\n");
if(s[j]=='G') my_printf("C\n");
	}else{
if(s[j]=='A') my_printf("T");
if(s[j]=='T') my_printf("A");
if(s[j]=='C') my_printf("G");
if(s[j]=='G') my_printf("C");
	}
}

}
	return 0;
}

