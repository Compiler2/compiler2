#define NUM_ITER 8109

#include <header.h>

int main_bench()
{
int t,sum[26],i,min,j,b,c;
char a[100001];

my_scanf("%d",&t);
while(t>0){
my_scanf("%s",a);

for(j=0;j<26;j++)
sum[j]=0;
for(j=0;j<strlen(a);j++)
sum[a[j]-'a']++;
min=0;
for(j=0;j<strlen(a)+1;j++)
{if(sum[a[j]-'a']==1)
{my_printf("%c\n",a[j]);
break;}
if(j==strlen(a)) my_printf("no\n");}
t--;}

}