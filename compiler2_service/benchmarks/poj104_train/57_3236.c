#define NUM_ITER 14198

#include <header.h>



int main_bench()

{
int n,i,j;
    my_scanf("%d",&n);
char*lab=(char*)malloc(n*32*sizeof(char));
for(i=0;i<n;i++)
    my_scanf("%s",lab+i*32);
for(i=0;i<n;i++)
{

    for(j=0;*(lab+32*i+j)!='\0';j++)
        {
    if(strcmp(lab+32*i+j,"er")==0||strcmp(lab+32*i+j,"ly")==0||strcmp(lab+32*i+j,"ing")==0)
    {*(lab+32*i+j)='\0';break;}
        }}
for(i=0;i<n;i++) puts(lab+32*i);
return 0;
}
