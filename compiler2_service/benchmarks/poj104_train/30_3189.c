#include <header.h>

int main_bench()
{
int n,i;
unsigned long sum=0;
int judge(int i);
my_scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(i%7!=0&&judge(i)==0)
sum+=i*i;
}
my_printf("%ld\n",sum);
return 0;
}
int judge(int i)
{
int k;

if(i>=10)
do
{
k=i%10;
if(k==7)return 1;
i=i/10;
}
while(i>=10);
if(i==7)return 1;
else return 0;

}