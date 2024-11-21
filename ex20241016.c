//例题1.1
/*#include<stdio.h>
int main()
{
    printf("这是我写的第一个c程序\n");
    return 0;
}*/
//例题1.2
/*#include<stdio.h>
int main()
{
    int i;
    i=1234;
    printf("这是我写的第二个c程序\n");
    printf("i=%d\n",i);
   return 0; 
}*/
//例题1.3
/*#include<stdio.h>
int main()
{
    unsigned  char a;
    char b,c;
    unsigned short int d;
    short int e,f;
    a=0xff;b=0xff;c=-1;
    d=0xffff;e=0xffff;f=-1;
    printf("%d %d %d\n",a,b,c);
    printf("%d %d %d\n",d,e,f);
    return 0;
}*/
//例题1.4
/*#include<stdio.h>
int main()
{
    char c1;
    c1=97;
    printf("%c\n",c1);
    printf("%d\n",c1);
    return 0;
 }*/
//例题1.5
/*#include<stdio.h>
int main()
{
    char c1,c2;
    c1='a';c2='b';
    c1=c1-32;c2=c2-32;
    printf("%c %c\n",c1,c2);
    return 0;
}*/
//例题1.6
/*#include<stdio.h>
int main()
{
    float x;
    x=12.3;
    printf("%f\n",x);
    printf("%e\n",x);
    return 0;
}*/
//例题1.7
/*#include<stdio.h>
int main()
{
    int a1=12,a2=34,a3=56;
    int a4=123,a5=123,a6=123;
    float f1=1.23F,f2=-45.789F;
    char c1='a',c2='b';
    printf("a1=%d,a2=%d,a3=%d\n",a1,a2,a3);
    printf("a4=%d,a5=%d,a6=%d",a4,a5,a6);
    printf("f1=%f,f2=%f\n",f1.f2);
    printf("c1='%c'c2='%c'\n",c1,c2);
    return 0;
}*/
//例题1.8
/*#include<stdio.h>
int main()
{
    int a=23,b,c;
    b=a%10;
    c=a/10;
    printf("a=%d\n",a);
    printf("十位=%d\n,c");
    printf("个位=%d\n",b)；
    return 0;    
}*/
//例题1.9
/*#include<stdio.h>
int main()
{
   int num=1230;
   printf("%d倒序后:",num);
   printf("%d",num%10);
   num=num/10;
   printf("%d",num%10);
   num=num/10;
   printf("%d",num%10);
   num=num/10;
   printf("%d",num%10);
   printf("\n"); 
    return 0;
}*/
//例题1.10
/*#include<stdio.h>
int main()
{
    int i=12,j=23;
    char c='a';
    float k=1.23;
    double x=1.2345678;
    printf("%d\n",c);
    printf("%d\n",i+c);
    printf("%d %d\n",c/i,c%i);
    printf("%d\n",i/10);
    printf("%f\n",i/10.0);
    printf("%f\n",i+k);
    printf("%f\n",i+c+k+x);
    printf("%d%%\n",i*100/j);
    printf("%f%%\n",i*100.0/j);
    return 0;    
}*/
//例题1.11
/*#include<stdio.h>
int main()
{
   int i=3,j=3,k=3,x=3;
   printf("%d\t",i++);printf("i=%d\n",i);
   printf("%d\t",++j);printf("j=%d\n",j);
   printf("%d\t",k--);printf("k=%d\n",k);
   printf("%d\t",--x);printf("x=%d\n",x); 
    return 0;
}*/
//例题1.12
/*#include<stdio.h>
int main()
{
    int i;
    float x=2.4F;
    i=(int)x;
    printf("x=%f,i=%d\n",x,i);
    return 0;
}*/
//例题1.13
/*#include<stdio.h>
int main()
{
    int a=12,b=23;
    printf("%d\n",(a+b)/2);
    printf("%f\n",(float)(a+b)/2);
    printf("%d%%\n",a*100/b);
    printf("%f%%\n",(float)a*100/b);
    return 0;
}*/
//例题1.14
/*#include<stdio.h>
int main()
{
    int a=7,b=2;
    printf("%d\n",a+=b);
    printf("%d\n",a-=b);
    printf("%d\n",a*=b);
    printf("%d\n",a/=b);
    printf("%d\n",a%=b);
    printf("%d\n",a*=b+2);
    return 0;    
}*/
//例题1.15
/*#include<stdio.h>
int main()
{
    int a=3,b=2,c=1;
    printf("a=%d,b=%d,c=%d\n",a,b,c);
    printf("关系表达式的值:1为真,0为假\n");
    printf("a>b:%d\n",a>b);
    printf("a>b+c:%d\n",a>b+c);
    printf("a!=b+c:%d\n",a!=b+c);
    printf("a>b>c:%d\n",a>b>c);
    return 0;
}*/
//例题1.16
/*#include<stdio.h>
int main()
{
    int a=3,b=2,c=1,d=0,e=0;
    char c1='a',c2='b';
    printf("a=%d,b=%d,c=%d,d=%d,e=%d\n",a,b,c,d,e);
    printf("c1='%c',c2='%c'\n",c1,c2);
    printf("下列表达式的值：1为真，0为假\n");
    printf("逻辑表达式a&&b的值：%d\n",a&&b);
    printf("逻辑表达式c&&d的值：%d\n",c&&d);
    printf("逻辑表达式c1&&c2的值：%d\n",c1&&c2);
    printf("逻辑表达式d||e的值：%d\n",d||e);
    printf("逻辑表达式c1||c2的值：%d\n",c1||c2);
    printf("逻辑表达式!a的值：%d\n",!a);
    printf("逻辑表达式！d的值：%d\n",!d);
    printf("数学表达式c<b<a的值：%d\n",b>c&&b<a);
    return 0;  
}*/
//例题1.17
/*#include<stdio.h>
int main()
{
    unsigned char a,b,c,r1,r2,r3,r4,r5,r6;
    a=0x23;b=0x45;c=0x55;
    r1=a&b;r2=a|b;r3=a^b;r4=~c;r5=a<<3;r6=a>>3;
    printf("a=0x%x,b=0x%x,c=0x%x\n",a,b,c);
    printf("a&b=0x%x\n",r1);
    printf("a|b=0x%x\n",r2);
    printf("a^b=0x^x\n",r3);
    printf("~c=0x%x\n",r4);
    printf("a<<3=0x%x\n",r5);
    printf("a>>3=0x%x\n",r6);
    return 0;
}*/
//例题1.19
/*#include<stdio.h>
int main()
{
    int a,b;
    b=(a=2*3,a*5);
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    return 0;
}*/