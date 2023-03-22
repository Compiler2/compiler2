#define NUM_ITER 824392

#include <header.h>


int main_bench()
{
int n,i,j,k,len,max;
char s[500],s1[500][5]={0},sum[500]={0};
my_scanf("%d",&n);
my_scanf("%s",s);
len=strlen(s);
for(i=0;i<len-n+1;i++)
{
for(j=0,k=i;j<n;j++,k++)
{
s1[i][j]=s[k];
} 
}




for(i=0;i<len-n;i++)
{
for(j=i+1;j<len-n+1;j++)
{
if(strcmp(s1[i],s1[j])==0)
sum[i]++;

}
}

max=sum[0];
for(i=0;i<len-n;i++)
{
if(sum[i]>max)
{
max=sum[i];

}
}

if(max!=0)
{
my_printf("%d\n",max+1);
for(i=0;i<len-n+1;i++)
{
if(sum[i]==max)
{
for(j=0;j<n;j++)
{
my_printf("%c",s1[i][j]);
}
my_printf("\n");
}

}
}
else my_printf("NO");
return 0; 
}
