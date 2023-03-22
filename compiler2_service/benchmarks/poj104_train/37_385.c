#define NUM_ITER 5118

#include <header.h>

int main_bench()
{
	char ch[100][10000]={0};
	
	char (*p)[10000];
	int n;
	my_scanf("%d\n",&n);
	for(p=ch;p<=ch+n-1;p++)
	{
		gets(*p);
	}
	char *point;
	int *p_num,count;
	for(p=ch;p<=ch+n-1;p++)
	{
        int num[26]={0};
		
		for(point=*p;*point!='\0';point++)
		{
			if(*point>='a'&&*point<='z')
			{
				int temp=*point-'a';
				p_num=num+temp;
				(*p_num)++;
			}
            else if(*point>='A'&&*point<='Z')
			{
				int temp=*point-'A';
				p_num=num+temp;
				(*p_num)++;
			}
		}
        for(point=*p;*point!='\0';point++)
		{  count=0;
           int temp=*point-'a';
           p_num=num+temp;
           if(*p_num==1){my_printf("%c",'a'+p_num-num);count++;break;}
		}if(count==0)my_printf("no");
		   
		   
		my_printf("\n");
	}
}
