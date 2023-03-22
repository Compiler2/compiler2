#include <header.h>

int main_bench(){
int n,i,j=0,k;
char s[1000];
char z[1000];
my_scanf("%d",&n);
for(i=0;i<n;i++)
{
my_scanf("%s",s);
for(j=0;s[j]!='\0';j++)
{
z[j]=s[j];
if(s[j+3]=='\0'&&s[j]=='i')
{
z[j]='\0';
}
if(s[j+2]=='\0'&&s[j]=='e'&&s[j+1]=='r')
{
z[j]='\0';
}
if(s[j+2]=='\0'&&s[j]=='l'&&s[j+1]=='y')
{
z[j]='\0';
}
}
my_printf("%s\n",z);
}
return 0;
}