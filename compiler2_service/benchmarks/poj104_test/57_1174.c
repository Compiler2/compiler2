#define NUM_ITER 32895

#include <header.h>

int main_bench()
{
int n,m,i,a;
my_scanf("%d",&n);
char s[300];
int len;
for(i = 0; i < n; i++){
   my_scanf("%s", s);
   len = strlen(s);
   if(len>3)
   {
    if(s[len-1]=='r'&&s[len-2]=='e')
       s[len-2]='\0';
    else if(s[len-1]=='y'&&s[len-2]=='l')
         s[len-2]='\0';
    else if(s[len-1]=='g'&&s[len-2]=='n'&&s[len-3]=='i')
       s[len-3]='\0';
      my_printf("%s\n", s);
     }
    else my_printf("%s\n", s);
}
return 0 ;
}