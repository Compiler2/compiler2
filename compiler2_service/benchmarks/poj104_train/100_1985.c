#define NUM_ITER 329085

#include <header.h>


int i,l,a[26],b[26];
int main_bench()
{
 char z[301],c;
 for(i=0;i<26;i++)
 {
  a[i]=0;
  b[i]=0;
 }
 my_scanf("%s",z);
 l=(int)strlen(z);
 for(i=0;i<l;i++)
 {
  c=z[i]-'A';
  if(c>=0&&c<=25)                                                                   
  {
   a[c]++;
  }
 }
    for(i=0;i<l;i++)
 {
  c=z[i]-'a';
  if(c>=0&&c<=25)
  {
   b[c]++;
  }
 } 
 char m;


 for(i=0;i<26;i++)
 {
  if(a[i]!=0)
  {
   m='A'+i;
   my_printf("%c=%d\n",m,a[i]);
  }
 }
for(i=0;i<26;i++)
 {
  if(b[i]!=0)
  {
      m='a'+i;
   my_printf("%c=%d\n",m,b[i]); 
  }
 }
int sum=0;
for(i=0;i<26;i++)
{
sum=sum+a[i]+b[i];
}
if(sum==0){
my_printf("No");}
return 0;
}
 
 

 