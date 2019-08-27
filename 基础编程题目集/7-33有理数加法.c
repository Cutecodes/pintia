/*
本题要求编写程序，计算两个有理数的和。
输入格式：
输入在一行中按照a1/b1 a2/b2的格式给出两个分数形式的有理数，其中分子和分母全是整形范围内的正整数。
输出格式：
在一行中按照a/b的格式输出两个有理数的和。注意必须是该有理数的最简分数形式，若分母为1，则只输出分子。
输入样例1：
1/3 1/6
输出样例1：
1/2
输入样例2：
4/3 2/3
输出样例2：
2
*/
#include<stdio.h>
int zdgys(int a,int b){
    int temp;
    temp=a%b;
    while(temp){
        a=b;
        b=temp;
        temp=a%b;
    }
    return b;
}
int main(){
    int fz1,fz2,fm1,fm2,fz,fm,t;
    scanf("%d/%d %d/%d",&fz1,&fm1,&fz2,&fm2);
    fm=fm1*fm2;
    fz=fz1*fm2+fz2*fm1;
    t=zdgys(fz,fm);
    fz/=t;
    fm/=t;
    if(fm==1)printf("%d",fz);
    else printf("%d/%d",fz,fm);
    return 0;
}
