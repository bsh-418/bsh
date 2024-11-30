/*//例题4.1
#include<stdio.h>
int max(int x,int y)
{
    int z;
    if(x>y)  z=x;
    else     z=y;
    return (z); 
}
int main()
{
    int a,b,c;
    printf("请输入两个整数：");
    scanf("%d %d",&a,&b);
    c=max(a,b);
    printf("a=%d,b=%d,max=%d",a,b,c);
    return 0;
}*/
//例题4.2
/*#include<stdio.h>
void fun(int x,int y)
{
    x+=1;
    y+=1;
    printf("x=%d,y=%d\n",x,y);
}
int main()
{
     int a=1,b=3;
     fun(a,b);
     printf("a=%d,b=%d\n",a,b);
     return 0;
}*/
//例题4.3
/*#include<stdio.h> 
void add(float x, float y)//定义加法函数
{
    printf("add=%f\n",x+y);
}
void sub(float x, float y)//定义减法函数
{
    printf("sub=%f\n",x-y);
}
void mul(float x, float y)//定义乘法函数
{
    printf("mul=%f\n",x*y);
}
void div(float x, float y)
{
    printf("div=%f\n",x/y);//定义除法函数
}
void result(float i, float j)//四则运算函数声明
{
   add(i,j);
   sub(i,j);
   mul(i,j);
   div(i,j);
}
int main()
{
    float a,b;
    printf("请输入两个实数(用空格隔开):");
    scanf("%f %f",&a,&b);
    printf("a=%f,b=%f\n",a,b);
    result(a,b);
}*/
/*#include<stdio.h>
extern int h;
int main()
{
    printf(" h=%d\n",h);
    return 0;
}*/
//例题4.4
/*#include<stdio.h>
int age(int n)
{
    int c;
    if(n==1)  c=10;
    else   c=age(n-1)+2;
    return c;
}
int main()
{
    printf("第五个人的年龄:%d\n",age(5));
}*/
//例题4.5
/*#include<stdio.h>
#include<stdlib.h>
long long jc(int n)
{
    long long x;
    if(n<0)
    {
        printf("n<0,输入错误！\n");
        exit(0);
    }
    else 
    {
        if(n==0||n==1) x=1;
        else x=jc(n-1)*n;
        return(x); 
    }
} 
int main()
{
    int n;
    long long y;
    printf("请输入一个正整数：");
    scanf("%d",&n);
    y=jc(n);
    printf("%d!=%I64d\n",n,y);
    return 0;
}*/
//例题4.6
/*#include<stdio.h>
void  test(int x);
int main()
{
    int a[5]={62,57,70,48,85},i;
    for(i=0;i<5;i++)
    {
        printf("a[%d]=%d:",i,a[i]);
        test(a[i]);
    }
    return 0;
}
void test(int x)
{
    if(x>=60)   printf("合格!\n");
    else        printf("不及格！\n") ; 
}*/
//例题4.7
/*#include<stdio.h>
void output(int b[],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("b[%d]=%d",b[i]);
}
int main()
{
    int a[5]={1,3,5,7,9};
    output(a,5);
    return 0;
}*/
//例题4.8
/*#include<stdio.h>
void  change(int b[],int n )
{
    int i;
    for(i=0;i<n;i++)
       b[i]++;
}
int main()
{
    int a[5]={1,3,5,7,9},i;
    printf("函数调用前:");
    for(i=0;i<5;i++)
       printf("a[%d]=%d",i,a[i]);
    printf("\n");
    change(a,5);
    printf("函数调用前:");
    for(i=0;i<5;i++)
       printf("a[%d]=%d",i,a[i]);
    printf("\n");
    return 0;
}*/
//例题4.9
/*#include<stdio.h>
#define N 5
void  MPSort(int b[],int n )
{
    int i,j,t,swap_flag;
    for(i=0;i<n;i++)
      {
        swap_flag=0;
        for(j=0;j<n-i-1;j++)
        {
            if(b[j]>b[j+1])
            {
                t=b[j];b[j]=b[j+1];b[j+1]=t;swap_flag=1;
            }
        }
        if(swap_flag==0)  break;
      }
}
int main()
{
    int a[N],i;
    printf("请输入%d个整数:",N);
    for(i=0;i<N;i++)
       scanf("%d",&a[i]);
    printf("排序前:");
    for(i=0;i<N;i++)
       printf("%5d",a[i]);
    printf("\n");
    MPSort(a,N);
    printf("排序后:");
    for(i=0;i<N;i++)
       printf("%5d",a[i]);
    printf("\n");
    return 0;
}*/
//例题4.10
/*#include<stdio.h>
float S,V;
void sv(float x)
{
    S=6*x*x;
    V=x*x*x;
}
int main()
{
    float a;
    printf("请输入正方体棱长:");
    scanf("%f",&a);
    sv(a);
    printf("棱长=%6.2f,表面积=%6.2f,体积=%6.2f",a,S,V);
    return 0;
}*/
//例题4.11
/*#include<stdio.h>
int a=1,b=2;
int add(int a,int b)
{
    int c;
    c=a+b;
    return (c);
}
int main()
{
    int a=3;
    printf("%d\n",add(a,b));
    return 0;
}*/
//例题4.12
/*#include<stdio.h>
int  a;
char b;
int main()
{
    int i;
    char j;
    printf("a=%d,b=%c,i=%d,j=%c\n",a,b,i,j);
    return 0;
}*/
//例题4.13
/*#include<stdio.h>
void lv()
{
    auto int a=1;
    static int b=1;
    a++;
    b++;
    printf("a=%d  b=%d\n",a,b);
}
int main()
{
    int i;
    for(i=1;i<=3;i++)
    {
        printf("第%d次调用lv函数后:",i);
        lv();
    }
    return 0;
}*/
//例题4.14
/*#include<stdio.h>
int main()
{
    static int a;
    static char b;
    static int c[5];
    int i;
    printf("i=%d\n",i);
    printf("a=%d\n",a);
    printf("b=%c\n",b);
    for(i=0;i<5;i++)
    {
        printf("c[%d]=%d\n",i,c[i]);
    }
    return 0;
}*/
//例题4.15
/*#include<stdio.h>
int jc(int n)
{
    static int f=1;
    f=f*n;
    return (f);
}
int main()
{
    int i;
    for(i=1;i<=5;i++)
    printf("%d!=%d\n",i,jc(i));
    return 0;
}*/
//例题4.17
#include<stdio.h>
int main()
{
    register long i,s=0;
    for(i=1;i<=1000;i++)
      s=s+i;
    printf("sum=%ld\n",s);  
}