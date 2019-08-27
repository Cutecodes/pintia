/*
本题要求编写程序，计算N个有理数的平均值。
输入格式：
输入第一行给出正整数N（≤100）；第二行中按照a1/b1 a2/b2 …的格式给出N个分数形式的有理数，其中分子和分母全是整形范围内的整数；如果是负数，则负号一定出现在最前面。
输出格式：
在一行中按照a/b的格式输出N个有理数的平均值。注意必须是该有理数的最简分数形式，若分母为1，则只输出分子。
输入样例1：
4
1/2 1/6 3/6 -5/10
输出样例1：
1/6
输入样例2：
2
4/3 2/3
输出样例2：
1
*/
#include<stdio.h>
#include<math.h>
int fz[110],fm[110];
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
    int n;int z,m,t;
    z=0;
    m=1;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d/%d",&fz[i],&fm[i]);
    for(int i=0;i<n;i++){
        
        z=z*fm[i]+fz[i]*m;
        m=m*fm[i];
        
        t=zdgys(abs(z),abs(m));
        z/=t;
        m/=t;

    }
    m=m*n;
    t=zdgys(abs(z),abs(m));
    z/=t;
    m/=t;
    if(m==1)printf("%d",z);
    else printf("%d/%d",z,m);
    return 0;

}