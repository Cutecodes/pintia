/*
将一个正整数N分解成几个正整数相加，可以有多种分解方法，例如7=6+1，7=5+2，7=5+1+1，…。编程求出正整数N的所有整数分解式子。
输入格式：
每个输入包含一个测试用例，即正整数N (0<N≤30)。
输出格式：
按递增顺序输出N的所有整数分解式子。递增顺序是指：对于两个分解序列N
​1
​​={n
​1
​​,n
​2
​​,⋯}和N
​2
​​={m
​1
​​,m
​2
​​,⋯}，若存在i使得n
​1
​​=m
​1
​​,⋯,n
​i
​​=m
​i
​​，但是n
​i+1
​​<m
​i+1
​​,则N
​1
​​序列必定在N
​2
​​序列之前输出。每个式子由小到大相加，式子间用分号隔开，且每输出4个式子后换行。
输入样例：
7
输出样例：
7=1+1+1+1+1+1+1;7=1+1+1+1+1+2;7=1+1+1+1+3;7=1+1+1+2+2
7=1+1+1+4;7=1+1+2+3;7=1+1+5;7=1+2+2+2
7=1+2+4;7=1+3+3;7=1+6;7=2+2+3
7=2+5;7=3+4;7=7
*/
#include<stdio.h>

int N;

int s[31]; // 存放划分结果，这里用了比较简单地容器，数组，比我想象的要简单 
int top = -1; // 数组指针 
int count = 0; // 统计输出的次数 
int sum = 0; // 拆分项累加和 

void division (int i);

int main (){
    scanf ("%d", &N);
    division (1);
    return 0; 
}

void division (int i) {//拆分 
    if (sum == N) {
        count ++;
        printf("%d=", N);
        int k;
        for (k=0; k<top; k++) {
            printf("%d+", s[k]);
        }
        if (count%4 == 0 || s[top] == N) {
            printf("%d\n", s[top]);
        } else {
            printf("%d;", s[top]);
        }
        return;
    } // 输出部分 
    if (sum > N) {
        return;
    }
    for (int j=i; j<=N; j++) { 
        s[++top] = j;
        sum += j; 
        division (j);
        sum -= j;
        top --;
    } // 算法主体 
}
