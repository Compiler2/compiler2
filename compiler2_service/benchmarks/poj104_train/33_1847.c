#define NUM_ITER 23334

#include <header.h>

int main_bench()
{
	char s[255]={'\0'},s1[255]={'\0'};int n,i,j;
my_scanf("%d",&n);
for(i=0;i<n;i++)
{   
	char s[255]={'\0'};char s1[255]={'\0'}; 
	my_scanf("%s",s);
    for(j=0;s[j]!='\0';j++)
	{
	  if(s[j]=='A')
	  {s1[j]='T';}
      if(s[j]=='T')
	  {s1[j]='A';}
	  if(s[j]=='C')
	  {s1[j]='G';}
	  if(s[j]=='G')
	  {s1[j]='C';}
	}
  my_printf("%s\n",s1); 

}    


return 0;
}