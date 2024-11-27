/*#include<stdio.h> 
  int main()
{
    char a;
    a='2';
    printf("%c\n",a);
    printf("字符串类型的长度：%lu 字节\n",sizeof("CHINA"));
}*/
/*#include<stdio.h>
int main()
{
    int num1=0,num2=0;//初始化
    scanf("%d %d ",&num1,&num2);//输入
    int sum=num1+num2;//定义
    printf("%d\n",sum);//输出
    return 0;
}*/
//例题2.1
/*#include<stdio.h>
int main()
{
  char c;
  printf("请输入一个字符：");
  c=getchar() ;
  putchar(c);
  putchar('\n');
  return 0;
}*/
//例题2.2
/*#include<stdio.h>
int main()
{
  int a=5,b=-1;
  float c=1.2;
  char d='a';
  printf("a=%d,b=%d,c=%f,d=%c\n",a,b,c,d);
  printf("字母a的ASCII码:%d\n",d);
  printf("字母a的ASCII码:%x\n",d);
  printf("输出字符串：%s\n","CHINA");
  printf("今年的增长率=");
  printf("50%%\n");
  return 0;
}*/
//例题2.3
/*#include<stdio.h>
int main()
{
  int a=123;
  float b=123.456;
  printf("a=%5d\n",a);
  printf("a=%-5d\n",a);
  printf("a=%05d\n",a);
  printf("a=%2d\n",a);
  printf("b=%8.2f\n",b);
  printf("b=%-8.2f\n",b);
  printf("%8s\n",CHINA);
  printf("%-8s\n",CHINA);
  printf("GREAT\n");
  return 0;
}*/
//例题2.4
/*#include<stdio.h>
int main()
{
  int i,j;
  float k;
  double x;
  printf("请输入两个整数和两个实数：\n");
  scanf("%d %d %f %f",&i,&j,&k,&x);
  printf("%d,%d,%f,%f",i,j,k,x);
  return 0;
}*/
//例题2.5 
/*#include<stdio.h>
int main()
{
  int i;char j;float k;
  printf("请输入一个整数,一个字符和一个实数:\n");
  scanf("%d %c %f",&i,&j,&k);
  printf("%d ,%c,%f\n",i,j,k);
  return 0;
}*/
//例题2.6
/*#include<stdio.h>
int main()
{
  char i,j,k;
  printf("请输入三个字符:\n");
  scanf("%c %c %c",&i,&j,&k);
  printf("%c,%c,%c\n ",i,j,k);
  return 0;
}*/
//例题2.7
//程序功能:输入两个整数，交换后再输出
//设计日期；2023-07-20
/*#include<stdio.h>
int main()
{
  int x,y,t;
  printf("请输入两个整数(用空格隔开):");
  scanf("%d %d %d",&x,&y);
  t=x;x=y;y=t;
  printf("将输入的两个整树交换之后：");
  printf("%d %d\n",x,y);
  return 0;  
}*/
//例题2.8
/*#include<stdio.h>
int main()
{
  int i=1,s=0;
  s=s+i;i++;
  s=s+i;i++;
  s=s+i;i++;
  s=s+i;i++;
  s=s+i;
  printf("sum=%d\n",s)
  return 0;
}*/
//例题2.9
/*#include<stdio.h>
int main()
{
  int a,b,t;
  printf("请输入两个整数(用空格隔开):");
  scanf("%d %d" ,&a,&b );
  if (a<b)
  {
    t=a;a=b;b=t;
  }
  printf("从大到小：%d %d\n",a,b);
  return 0;
}*/
//例题2.10
/*#include<stdio.h>
int main()
{
  int score;
  printf("请输入成绩:");
  scanf("%d ",&score)；
  if (score>=60) printf("恭喜，通过!\n")； 
  return 0;
}*/
//例题2.11
/*#include<stdio.h>
int  main()
{
  int score;
  printf("请输入成绩:");
  scanf("%d",&score);
  if(score>=60) printf("恭喜，通过!\n");
  else printf("未通过，继续努力！\n"); 
  return 0;
}*/
//例题2.12
/*#include<stdio.h>
int main()
{
  int num;
  printf("请输入一个整数；");
  scanf("%d ",&num);
  if(num) printf("该数不为0\n");
  else    printf("该数为0\n");
  return 0;
}*/
//例题2.13
/*#include<stdio.h>
int main()
{
  int i,j;
  printf("请输入两个整数:");
  scanf("%d %d ",&i,&j);
  if(i&&j)  printf("输入的两个数是都不是0.\n");
  else      printf("输入的两个数至少有一个是0.\n");
  return 0;
}*/ 
//例题2.14
/*#include<stdio.h>
int main()
{
  int x,y;
  printf("请输入x的值:");
  scanf("%d ",&x);
  if(x<0)        y=-1;
  else if(x==0)  y=0;
  else           y=1;
  printf("x=%d,y=%d\n",x,y);     
  return 0;
} */
//例题2.15
/*#include<stdio.h>
int main()
{
  int a,b,max;
  printf("请输入两个整数:");
  scanf("%d %d ",&a,&b);
  max=a>b?a:b;
  printf("max=%d\n",max);
  return 0;
} */
//例题2.16
/*#include<stdio.h>
int main()
{
  int score;
  printf("请输入课程成绩(整数):");
  scanf("%d ",&score);
  if(score>=0&&score<=100)
  {
    switch(score/10) 
    {
     case 10:
     case 9:  printf("优秀！\n");break;
     case 8:  printf("良好！\n");break;
     case 7:  printf("中等!\n");break;
     case 6:  printf("合格！\n");break;
     default: printf("不及格！\n");
    } 
  }return 0;
}*/
//例题2.17
/*#include<stdio.h>
int main()
{
  int i=1,sum=0;
  while(i<=100)
  {
    sum=sum+i;
    i++;
  } 
  printf("sum=%d\n",sum);
  return 0;
}*/
//例题2.18
/*#include<stdio.h>
int  main()
{
  char ch;
  printf("请输入一串字符(以#结束):");
  while((ch=getchar() )!='#')
       putchar(ch);
  putchar('\n');       
  return 0;
}*/
//例题2.19
/*#include<stdio.h>
int main()
{
  int i=1,sum=0;
  do 
  {
    sum=sum+i;
    i++;
    return 0;
  }while(i<=100);
  printf("sum=%d\n",sum);
  return 0;
}*/
//例题2.20.1
/*#include<stdio.h>
int main()
{
  int i;
  printf("请输入1个整数:");
  scanf("%d",&i);
  while (i<3)
  {
    i++;
  } 
  printf("i=%d\n",i);
  return 0; 
}*/
//例题2.20.2
/*#include<stdio.h>
int main()
{
  int i;
  printf("请输入1个整数:");
  scanf("%d",&i);
  do
  {
    i++;
  }while(i<3);
  printf("i=%d\n",i); 
  return 0;
}*/
//例题2.21.1
/*#include<stdio.h>
int main()
{
  int num;
  printf("请输入一个非负数:");
  scznf("%d",&num);
  printf("%d倒序后:",num);
  while(num>0)
  {
    printf("%d",num%10);
    num=num/10;
  } 
  return 0;
}*/
//例题2.21.2
/*#include<stdio.h>
int main()
{
  int num;
  printf("请输入一个非负数:");
  scanf("%d",&num);
  printf("%d 倒序后:",num);
  do
  {
    printf("%d",num%10);
    num=num/10;
  } while (num>0);
  printf("\n")
  return 0;  
}*/
//例题2.22
/*#include<stdio.h>
int main()
{
  int num;
  int digit=0;
  printf("请输入一个非负数:");
  scanf("%d",&num);
  printf("%d的位数是",num);
  do
  {
    num=num+10;
    digit++;
  } while (num>0);
  printf("%d\n",digit); 
  return 0;
}*/
//例题2.23.1
/*#include<stdio.h>
int main()
{
  int i,sum=0;
  for(i=1;i<=100;i++)
     sum=sum+i;
     printf("%d\n",sum); 
  return 0;
}*/
//例题2.23.2
/*#include<stdio.h>
int main()
{
  int i=1,sum=0;
  for(;i<=100;i++)
     sum=sum+i;
     printf("%d\n",sum); 
  return 0;
}*/
//例题2.23.3
/*#include<stdio.h>
int main()
{
  int i=1,sum=0;
  for(;i<=100;)
     {
      sum=sum+i;
      i++;
     }
     printf("%d\n",sum); 
  return 0;
}*/
//例题2.23.4
/*#include<stdio.h>
int main()
{
  int i,sum;
  for(sum=0,i=1;i<=100;i++)
     sum=sum+i;
     printf("%d\n",sum); 
  return 0;
}*/
//例题2.24
/*#include<stdio.h>
int main()
{
  int i,j;
  int k=0;
  for(i=1;i<=3;i++)
  {
    for(j=1;j<=4;j++)
       k++;
  }
  printf("循环次数:%d\n",k);
  return 0;
}*/
//例题2.25.1
/*#include<stdio.h>
int main()
{
  int i;
  for(i=1;i<=5;i++)
  {
    if(i==3)break;
    printf("%d\n",i);   
  }
  return 0;
}*/
//例题2.25.2
/*#include<stdio.h>
int main()
{
  int i;
  for(i=1;i<=5;i++)
  {
    if(i==3)continue;
    printf("%d\n",i);
  }
  return 0;
}*/
//例题2.26
/*#include<stdio.h>
int main()
{
  int i,sum=0;
  for(i=1;;i++)
  {
    sum+=i*i;
    if(sum>1000)  break;
  }
  printf("sum=%d,i=%d\n",sum,i); 
  return 0;
}*/
//例题2.27
/*#include<stdio.h>
int main()
{
  int  i;
  for(i=1;i<=100;i++)
  {
    if(i%7!=0)  continue;
    printf("%3d",i);
  }
  printf("\n");
  return 0;
}*/
//例题2.28
/*#include<stdio.h>
#define PI 3.14159
#define S(r) PI*(r)*(r)
int main()
{
  float a,area;
  while(1)
  {
    printf("请输入半径:");
    scanf("%f",&a);
    if(a<0)break;
    area=S(a) ;
    printf("半径=%6.2f\n",a);
    printf("面积=%6.2f\n ",area);
  } 
  return 0;
}*/
//例题2.29
/*#include<stdio.h>
#define MAX(x,y) ((x)>(y)?(x):(y))
int main()
{
  int a,b;
  printf("请输入两个整数(用空格隔开):");
  scanf("%d %d",&a,&b);
  printf("最大值=%d\n",MAX(a,b));
  return 0; 
} */
//例题2.30
/*#include<stdio.h>
#define ZK1 9
#define ZK2 8
#define ZK3 0
#define CJ 65
int main()
{
  float i=10,j=20,k=30;
  #ifdef ZK1
  printf("商品1的价格=%.2f\n",i*ZK1*0.1);
  #else
  printf("商品1的价格=%.2f\n",i);
  #endif
  #ifndef ZK2
  printf("商品2的价格=%.2f\n",j);
  #else
  printf("商品2的价格=%.2f\n",j*ZK2*0.1);
  #endif
  #if ZK3>0 
  printf("商品3的价格=%.2f\n",k*ZK3*0.1);
  #else
  printf("商品3的价格=%.2f\n",k);
  #endif
  #if CJ>=60&&CJ<=100
  printf("考试成绩=%d,通过！\n",CJ);
  #elif CJ>=0&&CJ<60
  printf("考试成绩=%d,不通过！\n",CJ);
  #elif CJ<0||CJ>100
  printf("考试成绩=%d,错误！\n",CJ);
  #endif
  return 0;
} */