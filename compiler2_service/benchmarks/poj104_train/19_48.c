#define NUM_ITER 753058

#include <header.h>

int main_bench()
{
 char str1[100],word1[100],word2[100];
 int n=0;
 int i,j;
 gets(str1);
 my_scanf("%s %s",word1,word2);
 for(i=0;i<(int)(strlen(str1));i++){
  for(j=i;j<i+(int)(strlen(word1));j++){
  if(str1[j]!=word1[j-i])  break;
  n=n+1;}
  if(i==0&&n==(int)(strlen(word1))){
	  my_printf("%s ",word2);
	  i=i+(int)(strlen(word1));}
  else if(n==(int)(strlen(word1))&&(str1[i+n]==32||str1[i+n]=='\0')&&str1[i-1]==32){
  my_printf("%s ",word2);
  i=i+(int)(strlen(word1));}
  else my_printf("%c",str1[i]);
 n=0;}
return 0;
} 