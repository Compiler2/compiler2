#define NUM_ITER 18522

#include <header.h>

main_bench()
{
int t,i,j,k;
char s[100000]={0};
char A[100] = {0};
my_scanf("%d",&t);
getchar();
for(i=0;i<t;i++)
{
gets(s);

j = 0;
while(s[j])
{
for(k=0;k<strlen(s);k++)
if(s[k]==s[j]&&k!=j)
{
 break;
}

if(k==strlen(s))
{
A[i] = s[j];break;
}

j++;

}

}

for(i=0;i<t;i++)
{
if(A[i]==0)my_printf("no\n");
else my_printf("%c\n",A[i]);

}




}