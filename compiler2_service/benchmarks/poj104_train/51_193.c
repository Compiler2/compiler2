#include <header.h>

int main_bench()
{
 int n,a[1001];
 char str[1001];
 my_scanf("%d",&n);
 char s[1001][1001];
 my_scanf("%s",str);
 int i,j,t=0,m,p;
 m=strlen(str)-n;
 for(i=0;i<=m;i++)
 {
  for(j=0;j<n;j++)
  {
   s[i][j]=str[i+j];
  }
 }
 for(i=0;i<=m;i++)
 {
   a[i]=0;
   for(j=0;j<=m;j++)
   {
    if(strcmp(s[i],s[j])==0) a[i]++;
   }
 }
 for(i=0;i<=m;i++)
 {
  if(a[i]>t) t=a[i];
 }
 if(t==1) my_printf("NO\n");
 else{
 my_printf("%d\n",t);
 for(i=0;i<=m;i++)
 {
	 p=0;
	 for(j=0;j<i;j++)
	 {if(strcmp(s[i],s[j])==0) p=1;}
	 if(a[i]==t&&p==0) my_printf("%s\n",s[i]);
 }}
}