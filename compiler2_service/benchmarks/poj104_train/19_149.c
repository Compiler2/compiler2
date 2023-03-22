#include <header.h>

int main_bench()
{
 int a=0,b=0,c=0,d[10],i=0,j=0,k=0,l=0;
 char s[1000],q[100],w[100];
 gets(s);gets(q);gets(w);
 for(j=0;j<100;j++)
 {if(s[j]=='\0'&&a==0)a=j;
  if(q[j]=='\0'&&b==0)b=j;
  if(w[j]=='\0'&&c==0)c=j;
  if(a!=0&&b!=0&&c!=0)break;}
  for(i=0;i<=a;i++)
   if(s[i]==' '||s[i]=='\0')
    for(j=0;j<b;j++)
     if(q[j]!=s[i-b+j])break;
     else if(s[i-b-1]==' '||i==b){d[k++]=i;j=b;}
  if(k!=0)
   for(i=0;i<a;i++){if(i==d[l]-b){for(j=0;j<c;j++)my_printf("%c",w[j]);i=d[l]-1;l++;}else my_printf("%c",s[i]);}
  else for(i=0;i<a;i++)my_printf("%c",s[i]);
 return 0;
}