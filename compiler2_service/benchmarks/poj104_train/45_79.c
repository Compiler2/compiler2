#define NUM_ITER 1215272

#include <header.h>

int main_bench()
{
  char a[50],b[50];
  int i,j;
  my_scanf("%s %s",a,b);
  for(i=0;b[i]!='\0';i++){
	  for(j=0;a[j]!='\0';j++){
		  if(a[j]!=b[i+j]) break;
		  my_printf("%d\n",i);
  break;}}
	return 0;
}