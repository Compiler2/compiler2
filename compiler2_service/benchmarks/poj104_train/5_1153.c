#define NUM_ITER 901399

#include <header.h>

int main_bench()
{
int s=0,i;
double a;
char b[2][1000];
my_scanf("%lf",&a);
my_scanf("%s",b[0]);
my_scanf("%s",b[1]);
if(strlen(b[0])!=strlen(b[1]))
 {
   my_printf("error");
  
   return 0;                             
 }
for(i=0;i<strlen(b[0]);i++)
 {
 if(b[0][i]!='A'&&b[0][i]!='T'&&b[0][i]!='C'&&b[0][i]!='G'&&b[1][i]!='A'&&b[1][i]!='T'&&b[1][i]!='C'&&b[1][i]!='G'&&b[0][i]!='a'&&b[0][i]!='t'&&b[0][i]!='c'&&b[0][i]!='g'&&b[1][i]!='a'&&b[1][i]!='t'&&b[1][i]!='c'&&b[1][i]!='g')
{
  my_printf("error");

  return 0;                                                                                                                   
}
 if(b[0][i]==b[1][i])
  s++;
 }
if(s*1.0/strlen(b[0])>a)
 my_printf("yes");
else my_printf("no");

return 0;    
}