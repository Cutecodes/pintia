/*
本题要求实现一个函数，判断任一给定整数N是否满足条件：它是完全平方数，又至少有两位数字相同，如144、676等。
函数接口定义：
int IsTheNumber ( const int N );
其中N是用户传入的参数。如果N满足条件，则该函数必须返回1，否则返回0。
裁判测试程序样例：
#include <stdio.h>
#include <math.h>

int IsTheNumber ( const int N );

int main()
{
    int n1, n2, i, cnt;
	
    scanf("%d %d", &n1, &n2);
    cnt = 0;
    for ( i=n1; i<=n2; i++ ) {
        if ( IsTheNumber(i) )
            cnt++;
    }
    printf("cnt = %d\n", cnt);

    return 0;
}

//你的代码将被嵌在这里 
输入样例：
105 500
输出样例：
cnt = 6
*/

//用打表降低时间复杂度
/*
int a,b,c,d;
    for(int i=1;i<=100;i++)
        {
        if(i<32){
            a=i*i/100;
            b=i*i/10%10;
            c=i*i%10;
            if(a!=b&&a!=c&&b!=c);
            else printf("%d\n",i*i);
        }
        if(i>31){
            a=i*i/1000;
            b=i*i/100%10;
            d=i*i/10%10;
            c=i*i%10;
            if(a!=b&&a!=c&&b!=c&&a!=d&&b!=d&&c!=d);
            else printf("%d\n",i*i);
        }
        }
*/
int IsTheNumber ( const int N ){
	int a,b,c,d;
    for(int i=1;i<=100;i++)
        {
        if(i<32&&N>=i*i){
            a=i*i/100;
            b=i*i/10%10;
            c=i*i%10;
            if(a!=b&&a!=c&&b!=c);
            else if(N==i*i)return 1;
        }
        if(i>31&&N>=i*i){
            a=i*i/1000;
            b=i*i/100%10;
            d=i*i/10%10;
            c=i*i%10;
            if(a!=b&&a!=c&&b!=c&&a!=d&&b!=d&&c!=d);
            else if(N==i*i)return 1;
        }
        }
	return 0;
}