#define NUM_ITER 1194687

#include <header.h>

int main_bench()
{
	char sequence[301];
	my_scanf("%s",sequence);
	int num=0;
	int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0,w=0,x=0,y=0,z=0,none=0;
	for(num=0;sequence[num]!='\0';num++)
	{
		switch(sequence[num])
		{
		case 'a':a++;break;
		case 'b':b++;break;
		case 'c':c++;break;
        case 'd':d++;break;
        case 'e':e++;break;
		case 'f':f++;break;
		case 'g':g++;break;
        case 'h':h++;break;
        case 'i':i++;break;
		case 'j':j++;break;
		case 'k':k++;break;
        case 'l':l++;break;
        case 'm':m++;break;
		case 'n':n++;break;
		case 'o':o++;break;
        case 'p':p++;break;
        case 'q':q++;break;
		case 'r':r++;break;
		case 's':s++;break;
        case 't':t++;break;
        case 'u':u++;break;
		case 'v':v++;break;
		case 'w':w++;break;
        case 'x':x++;break;
        case 'y':y++;break;
		case 'z':z++;break;
		}
		
		if(sequence[num]<97 || sequence[num]>122)
		{	none++;
		
		}
	}
	if(a>0)
	my_printf("a=%d\n",a);
	if(b>0)
    my_printf("b=%d\n",b);
	if(c>0)
    my_printf("c=%d\n",c);
	if(d>0)
	my_printf("d=%d\n",d);
    if(e>0)
	my_printf("e=%d\n",e);
    if(f>0)
	my_printf("f=%d\n",f);
    if(g>0)
	my_printf("g=%d\n",g);
    if(h>0)
	my_printf("h=%d\n",h);
    if(i>0)
    my_printf("i=%d\n",i);
    if(j>0)
    my_printf("j=%d\n",j);
    if(k>0)
    my_printf("k=%d\n",k);
    if(l>0)
	my_printf("l=%d\n",l);
	if(m>0)
    my_printf("m=%d\n",m);
	if(n>0)
    my_printf("n=%d\n",n);
	if(o>0)
    my_printf("o=%d\n",o);
	if(p>0)
	my_printf("p=%d\n",p);
	if(q>0)
    my_printf("q=%d\n",q);
	if(r>0)
    my_printf("r=%d\n",r);
	if(s>0)
    my_printf("s=%d\n",s);
	if(t>0)
	my_printf("t=%d\n",t);
	if(u>0)
    my_printf("u=%d\n",u);
	if(v>0)
    my_printf("v=%d\n",v);
	if(w>0)
    my_printf("w=%d\n",w);
	if(x>0)
	my_printf("x=%d\n",x);
	if(y>0)
    my_printf("y=%d\n",y);
	if(z>0)
    my_printf("z=%d\n",z);
	if(none==num)
    my_printf("No\n");
	return 0;
}

