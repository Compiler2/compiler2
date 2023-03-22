#define NUM_ITER 21591

#include <header.h>

int main_bench()
{
int m,i,j,k=0;
struct
{int n;
 char s[26];
}book[999];
my_scanf("%d",&m);
for(i=0;i<m;i++)
  my_scanf("%d %s",&book[i].n,&book[i].s);
int a[26]={0};
for(i=0;i<m;i++)
 for(j=0;book[i].s[j]!='\0';j++)
	 a[(int)(book[i].s[j]-'A')]++;
for(i=1;i<26;i++)
 if(a[k]<a[i])
 k=i;
my_printf("%c\n%d\n",k+'A',a[k]);
for(i=0;i<m;i++)
 for(j=0;book[i].s[j]!='\0';j++)
	 if(book[i].s[j]==k+'A')
	 {
		 my_printf("%d\n",book[i].n);
	 break;
	 }
}