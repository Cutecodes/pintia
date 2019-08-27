/*本题要求实现一个打印非负整数阶乘的函数。
函数接口定义：
void Print_Factorial ( const int N );
其中N是用户传入的参数，其值不超过1000。如果N是非负整数，则该函数必须在一行中打印出N!的值，否则打印“Invalid input”。
裁判测试程序样例：
#include <stdio.h>

void Print_Factorial ( const int N );

int main()
{
    int N;
	
    scanf("%d", &N);
    Print_Factorial(N);
    return 0;
}

/* 你的代码将被嵌在这里

输入样例：
15
输出样例：
1307674368000
*/
void Print_Factorial ( const int N ){
	int a[3000]={0};//N
	int b[3000]={0};
	int bl=0;
	int c[3000]={0};
	c[1]=1;
	int cl=1;
	int flag=0;
	
	for(int i =1;i<=N;i++){
	int al=0;
	int n;
	n=N;
	
	while(n!=0){
		al++;
		a[al]=n%10;
		n/=10;
	}
	
	for(int j=1;j<=al;j++){
		for(int k=1;k<=cl;k++){
			b[k]=(c[k]*a[j]+flag)%10;
			flag=(c[k]*a[j]+flag)/10;
			bl=k;
		}
	if(flag!=0){b[bl+1]=flag;bl++;}}
	}
	for(int m=bl;m>=1;m--)
	printf("%d",b[m]);
}