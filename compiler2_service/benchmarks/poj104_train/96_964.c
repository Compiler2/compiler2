#define NUM_ITER 1349590

#include <header.h>

int main_bench()
{
char ori[101],temp[4],res[100];
int i=1,t,s;
my_scanf("%s",ori);
temp[0]=ori[0];temp[1]=ori[1];temp[2]='\0';
if(atoi(temp)<13)
{
if(atoi(temp)<10)
{
my_printf("0\n%d\n",atoi(temp));
return 0;
}
temp[2]=ori[2];temp[3]='\0';
i=2;
}
t=atoi(temp);
for(s=i;ori[i]!='\0';i++)
{
res[i-s]=t/13+'0';
temp[0]=ori[i+1];temp[1]='\0';
if(ori[i+1]=='\0')
t=t%13;
else
t=(t%13)*10+atoi(temp);
}
if(i==s)
{
res[0]='0';
i++;
}
res[i-s]='\0';
my_printf("%s\n%d\n",res,t);
return 0;
}