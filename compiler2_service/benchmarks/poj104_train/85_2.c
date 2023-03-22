#define NUM_ITER 32024

#include <header.h>

int main_bench(){
char s[100];
int i,j,n;
my_scanf("%d",&n);
for(i=0;i<n;i++){
 my_scanf("%s",s);
 if( !(s[0]>='a'&&s[0]<='z' || s[0]>='A'&&s[0]<='Z' || s[0]=='_' || s[0]=='$') )
   my_printf("no\n");
 else{
  for(j=0;j<strlen(s);j++){
   if( !(s[j]>='a'&&s[j]<='z' || s[j]>='A'&&s[j]<='Z' || s[0]=='_' || s[0]=='$' || s[j]>='0'&&s[j]<='9') ){
    my_printf("no\n");
    break;
   }
  }
  if(j==strlen(s))
    my_printf("yes\n");
 }
}
return 0;
}