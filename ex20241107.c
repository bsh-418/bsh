//例题3.1
/*#include<stdio.h>
int main()
{
    int a[10]; //定义数组
    int i;    //数组的下标变量
    for(i=0;i<=9;i++)
        a[i]=i;
    for(i=9;i>=0;i--)
        printf("%d",a[i]) ;
    printf("\n");        
    return 0;
}*/
//例题3.2
/*#include<stdio.h>
#define N 5  //宏定义数据个数
int main()
{
    int i,max,a[N];
    printf("请输入%d个整数:",N);
    for(i=0;i<N;i++)
       scanf("%d",&a[i]);
    max=a[0];  //最大值的初值
    for(i=1;i<N;i++)
       if(a[i]>max) max=a[i];
    printf("最大值：%d\n",max);         
    return 0;
}*/
//例题3.3
/*#include<stdio.h>
#define N 5  //宏定义参与排序的数据个数
int main()
{
    int a[N];   //定义数组，存放待排序的一组数据
    int i,j,t;
    printf("请输入%d个整数:",N);
    for(i=0;i<N;i++)
       scanf("%d",&a[i]);//将N个数据存入数组
    printf("排序前:");
    for(i=0;i<N;i++)
        printf("%5d",a[i]);//输出排序前的N个数据
    printf("\n");
    //冒泡排序法（从小到大）：小数在前面，大数在后面
    for(i=1;i<N;i++)   //N个数，共需比较N-1轮
    {
        for(j=0;j<N;j++)   //第i论需要比较N-i次
        {
            if(a[j]>a[j+1])  //依次比较两个相邻的数，将大数放在后面
            {
                t=a[j];a[j]=a[j+1];a[j+1]=t;  //交换
             }
        }
    }
    printf("排序后:");
    for(i=0;i<N;i++)
        printf("%5d",a[i]);  //输出排序后的N个数据
    printf("\n");    
    return 0;
}*/
//例题3.4
/*#include<stdio.h>
int main()
{
    int a[3][4];
    int i,j;
    printf("请输入12个整数:");
    for(i=0;i<3;i++)
     {
       for(j=0;j<4;j++)       
        scanf("%d",&a[i][j]);             
     } 
     for(i=0;i<3;i++)
     {
        for(j=0;j<4;j++)
            printf("a[%d][%d]=%d\n",i,j,a[i][j]); 
     }
    return 0;
} */
//例题3.5
/*#include<stdio.h>
int main()
{
    int  i,j,max,row=0,col=0;
    int a[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
           printf("%3d",a[i][j]);
        printf("\n");   
    }
    max=a[0][0];
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            if(a[i][j>max])
            {
               max=a[i][j];
               row=i;col=j; 
            } 
        }
    }
    printf("最大值=%d,行=%d,列=%d\n",max,row+1,col+1);
    return 0;
}*/
//例题3.6
/*#include<stdio.h>
int main()
{
    char a[5]={'a','b','c','d','e'};
    char b[6]="12345";
    int i;
    printf("字符数组a:");
    for(i=0;i<5;i++)
        printf("%c",a[i]);
    printf("\n");
    printf("字符数组b:");
    for(i=0;i<6;i++)
        printf("%c",b[i]);
    printf("\n");    
    return 0;
}*/
//例题3.7
/*#include<stdio.h>
int main()
{
    int  i;
    char c[5];
    printf("请输入5个字符:");
    for(i=0;i<5;i++)
       scanf("%c",&c[i]);
    printf("字符数组元素：");
    for(i=0;i<5;i++)
       printf("%c",c[i]);
    printf("\n");   
    return 0;
}*/
//例题3.8
/*#include<stdio.h>
int main()
{
    char str[10];
    printf("请输入字符串：");
    scanf("%s",str);
    printf("%s\n",str);
    return 0;
}*/
//例题3.9
/*#include<stdio.h>
int main()
{
    char str1[10],str2[10],str3[10];
    printf("请输入3个字符串:");
    scanf("%s %s %s",str1,str2,str3);
    printf("%s %s %s\n",str1,str2,str3 );
    return 0;
}*/