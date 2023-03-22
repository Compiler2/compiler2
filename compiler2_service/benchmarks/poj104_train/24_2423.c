#define NUM_ITER 225671

#include <header.h>

int main_bench()
{
char b[30],m1[30],m2[30];
int max=0,min=40;
for (int i=0;;i++)
{
my_scanf("%c",&b[i]);
if (b[i]=='\n'||b[i]==0) 
    {
    b[i]=0;
    if(i>max) {max=i;strcpy(m1,b);}
    if (i<min&&i>0) {min=i;strcpy(m2,b);}
    break;
    }

if (b[i]==' '||b[i]==',') 
    {
    b[i]=0;
    if(i>max) {max=i;strcpy(m1,b);}
    if (i<min&&i>0) {min=i;strcpy(m2,b);}
    i=-1;
    }
}
my_printf("%s",m1);
my_printf("\n");
my_printf("%s",m2);
}
