#define NUM_ITER 9361

#include <header.h>

int main_bench()
{
int tas,task,n,i,mark[100],l,flag;
char s[10000];
my_scanf("%d",&task);
for(tas=1;tas<=task;tas++)
{
my_scanf("%s",&s);
flag=0;
l=strlen(s);
for(i=0;i<=27;i++) 
 mark[i]=0;
for(i=0;i<l;i++)
 mark[s[i]-'a'+1]++;
for(i=0;i<l;i++)
 if(mark[s[i]-'a'+1]==1){my_printf("%c\n",s[i]);flag=1;break;}
if(flag==0) my_printf("no\n");
}
}