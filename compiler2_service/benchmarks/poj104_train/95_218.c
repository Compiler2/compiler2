#define NUM_ITER 990708

#include <header.h>

int main_bench()
{
 char str1[100],str2[100];
 int i=0,j=0;
 gets(str1);
 gets(str2);
 
while(str1[i]!='\0')
{
if(str1[i]>='A'&&str1[i]<='Z')
{str1[i]=str1[i]+32;}
++i;
}
while(str2[j]!='\0')
{
if(str2[j]>='A'&&str2[j]<='Z')
{str2[j]=str2[j]+32;}
++j;
}
if(strcmp(str1,str2)>0)
 {
  my_printf(">");
 }
else if(strcmp(str1,str2)<0)
 {
  my_printf("<");
 }
 else if(strcmp(str1,str2)==0)
 {
	 my_printf("=");
 }


}