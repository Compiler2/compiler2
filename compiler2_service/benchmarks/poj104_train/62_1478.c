#define NUM_ITER 1502243

#include <header.h>


main_bench()
{
int i,j;
void dao(char x[],int y);
char a[1000];
gets(a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]==' ')
{
if(a[i+1]==' ')
{dao(a,i);

i--;}
}
}
for(i=0;a[i]!='\0';i++)
my_printf("%c",a[i]);

}
void dao(char x[], int y)
{
     int j;
 
for(j=y;x[j]!='\0';j++)
{
x[j]=x[j+1];}

}