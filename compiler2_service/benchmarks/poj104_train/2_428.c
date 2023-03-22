#include <header.h>

int main_bench()  
{char ma='A';
int cnt[128]={0};
int i,j,n;
struct s
{int id;
char au[27];
}bk[1000];

my_scanf("%d",&n);
for(i=0;i<n;i++)
{my_scanf("%d%s",&bk[i].id,bk[i].au);
for(j=0;bk[i].au[j]!='\0';j++)
{cnt[bk[i].au[j]]++;
if(cnt[bk[i].au[j]]>cnt[ma]){ma=bk[i].au[j];}
}
}
my_printf("%c\n%d\n",ma,cnt[ma]);
for(i=0;i<n;i++)
{
	if(strchr(bk[i].au,ma)){my_printf("%d\n",bk[i].id);}
}
return 0;

}