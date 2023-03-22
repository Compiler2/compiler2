#define NUM_ITER 1130597

#include <header.h>

int main_bench()
{
 int b,c,i;
 char a[100];
 my_scanf("%s",a);
 b=a[0]-'0';
 if(a[1]=='\0'||(a[2]=='\0'&&(a[2]-'0')<3&&(a[0]-'0')==1))
 {
   my_printf("0");
 }
 for(i=1;a[i]!='\0';i++)
 {
  b=b*10+(a[i]-'0');
  c=b/13;
  b=b%13;
  if(i==1&&c==0)
  {
      continue;
  }
  my_printf("%d",c);
 }
  my_printf("\n%d",b);
 return 0;
}