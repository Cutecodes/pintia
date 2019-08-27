/*
给定某数字A（1≤A≤9）以及非负整数N（0≤N≤100000），求数列之和S=A+AA+AAA+⋯+AA⋯A（N个A）。例如A=1, N=3时，S=1+11+111=123。
输入格式：
输入数字A与非负整数N。
输出格式：
输出其N项数列之和S的值。
输入样例：
1 3
输出样例：
123
*/
#include<stdio.h>
int b[101000]={0};
int main(){
    int a,n;int t;int k;
    scanf("%d %d",&a,&n);
    if(n==0){printf("0");return 0;}
    for(int i=1;i<=n;i++)
        b[i]=a*(n+1-i);
    for(int i=1;i<=n;i++){
        t=b[i];
        b[i]=t%10;
        b[i+1]=b[i+1]+t/10;
    }
    if(b[n+1]==0)k=n;
    else k=n+1;
    for(;k>0;k--)
    printf("%d",b[k]);
}
