#include <header.h>

int main_bench()
{ 
	int sum=0,i,t;
	char str[5]={0},str2[5]={0};
	  my_scanf("%s",str);
  for (i=0;str[i]!='\0';i++)
	  sum=sum+1;
  for (i=sum-1;i>=0;i--)
  { 
	  t=sum-i-1;
	  str2[t]=str[i];
  }
  my_printf("%s",str2);

}