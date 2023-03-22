#include <header.h>


int main_bench()
{
int n,i,j;
char s[1000][300];
my_scanf("%d",&n);
for(i=0;i<n;i++)
{
my_scanf("%s",s[i]);
}
for(i=0;i<n;i++)
{
for(j=0;j<strlen(s[i]);j++)
{
if(s[i][j]=='A')
{
s[i][j]='T';
}
else if(s[i][j]=='T')
{
s[i][j]='A';
}
else if(s[i][j]=='C')
{
s[i][j]='G';
}
else
{
s[i][j]='C';
}
if(j==strlen(s[i])-1)
{
my_printf("%s\n",s[i]);
}

}
}
return 0;
}