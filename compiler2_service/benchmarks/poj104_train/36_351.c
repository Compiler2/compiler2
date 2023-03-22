#define NUM_ITER 894743

#include <header.h>

int main_bench()
{
  void sort(char array[],int n);
  char str1[100],str2[100];
  int i,j,l1,l2,temp;
  my_scanf("%s %s",str1,str2);
  l1=strlen(str1);
  l2=strlen(str2);
  sort(str1,l1);
  sort(str2,l2);
  if(strcmp(str1,str2)==0)
  my_printf("YES");
  else my_printf("NO");
}
 void sort(char array[],int n)
{
  int i,j;
  char ch;
  for(i=0;i<n-1;i++)
  for(j=i+1;j<n;j++)
  {
    if(array[i]>array[j])
    {
      ch=array[i];
      array[i]=array[j];
      array[j]=ch;
     }
   }
}