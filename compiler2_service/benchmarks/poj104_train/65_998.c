#define NUM_ITER 32153

#include <header.h>

int main_bench()
{
int n;
int i;
int a[200][2];
int ascore=0,bscore=0;
my_scanf("%d",&n);
for(i=0;i<n;i++)
{
my_scanf("%d",&a[i][0]);
my_scanf("%d",&a[i][1]);
if(a[i][0]==0&&a[i][1]==1)ascore++;
if(a[i][0]==0&&a[i][1]==2)bscore++;
if(a[i][0]==1&&a[i][1]==0)bscore++;
if(a[i][0]==1&&a[i][1]==2)ascore++;
if(a[i][0]==2&&a[i][1]==0)ascore++;
if(a[i][0]==2&&a[i][1]==1)bscore++;
}
if(ascore>bscore)my_printf("A");
if(bscore>ascore)my_printf("B");
if(ascore==bscore)my_printf("Tie");
}