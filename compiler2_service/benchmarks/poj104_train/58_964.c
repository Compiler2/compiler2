#define NUM_ITER 24191

#include <header.h>

main_bench()
{
int i,j,n,l,k=1;
char a[81];
char s[81];
my_scanf("%d",&n);
gets(s);
for(i=0;i<n;i++)
{

gets(s); 
l=strlen(s);
a[0]=s[0];
if(a[0]<65||(90<a[0]&&a[0]<97&&a[0]!=95)||a[0]>122)
{
 my_printf("0\n"); 
                 
 }
else             
{
                       for(j=1;j<l;j++) 
                       {
                                        a[j]=s[j];
                           if(a[j]<48||(a[j]>57&&a[j]<65)||(a[j]>90&&a[j]<95)||a[j]==96||a[j]>122)
                           {
                             my_printf("0\n");
                            break;
                            }                    
                        }
if(j==l)
my_printf("1\n");
}
}
getchar();
getchar();
getchar();
getchar();getchar();
getchar();getchar();
getchar();
}
 