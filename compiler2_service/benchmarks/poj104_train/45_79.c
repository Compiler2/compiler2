#include <header.h>

int main_bench()
{
  char a[50],b[50];
  int i,j;
  scanf("%s %s",a,b);
  for(i=0;b[i]!='\0';i++){
	  for(j=0;a[j]!='\0';j++){
		  if(a[j]!=b[i+j]) break;
		  printf("%d\n",i);
  break;}}
	return 0;
}