#include <header.h>

int main_bench(){
double r;
my_scanf("%lf",&r);
char zfc[500];
char jiyin[500];
my_scanf("%s",zfc);
my_scanf("%s",jiyin);
int n=0;
int i,k,L,N;
for (i=0;zfc[i]!='\0';i++){
if(zfc[i+1]=='\0'){
L=i;
}
}
L++;
for (k=0;jiyin[k]!='\0';k++){
if(jiyin[k+1]=='\0'){
N=k;
}
}
N++;
if(L!=N){
my_printf("error");
}else {
for(i=0;zfc[i]!='\0';i++){
if(zfc[i]!='A'&&zfc[i]!='T'&&zfc[i]!='C'&&zfc[i]!='G'){
my_printf("error");
return 0;
}
}
for(i=0;jiyin[i]!='\0';i++){
if(jiyin[i]!='A'&&jiyin[i]!='T'&&jiyin[i]!='C'&&jiyin[i]!='G'){
my_printf("error");
return 0;
}
}
for (i=0;zfc[i]!='\0';i++)
{
if(zfc[i]==jiyin[i])
{
n++;
}
}
if (n*1.0/L>r)
{
          my_printf("yes");
           }else 
{
           my_printf("no");
           }


}
return 0;
}

