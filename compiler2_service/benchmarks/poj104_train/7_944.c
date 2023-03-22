#define NUM_ITER 893559

#include <header.h>

int main_bench()
{
char s[256],a[100],b[100];
int i=0,z=0,c=0,d,j,f,e;
gets(s);
gets(a);
gets(b);
c=strlen(a);
e=strlen(s);
while(i<e)
{
if(s[i]==a[z]){
f=0;
for(d=i;d<i+c;d++)
{
if(s[d]==a[z]){
    f++;
z++;
}
}
if(f==c){
z=0;
for(d=i;d<i+c;d++)
{
s[d]=b[z];
z++;
}
break;
}else{
z=0;
}
}
i++;
}
for(i=0;i<e;i++)
{
my_printf("%c",s[i]);
}
return 0;
} 
