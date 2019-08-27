/*
本题要求编写程序，计算2个复数的和、差、积、商。
输入格式：
输入在一行中按照a1 b1 a2 b2的格式给出2个复数C1=a1+b1i和C2=a2+b2i的实部和虚部。题目保证C2不为0。
输出格式：
分别在4行中按照(a1+b1i) 运算符 (a2+b2i) = 结果的格式顺序输出2个复数的和、差、积、商，数字精确到小数点后1位。如果结果的实部或者虚部为0，则不输出。如果结果为0，则输出0.0。
输入样例1：
2 3.08 -2.04 5.06
输出样例1：
(2.0+3.1i) + (-2.0+5.1i) = 8.1i
(2.0+3.1i) - (-2.0+5.1i) = 4.0-2.0i
(2.0+3.1i) * (-2.0+5.1i) = -19.7+3.8i
(2.0+3.1i) / (-2.0+5.1i) = 0.4-0.6i
输入样例2：
1 1 -1 -1.01
输出样例2：
(1.0+1.0i) + (-1.0-1.0i) = 0.0
(1.0+1.0i) - (-1.0-1.0i) = 2.0+2.0i
(1.0+1.0i) * (-1.0-1.0i) = -2.0i
(1.0+1.0i) / (-1.0-1.0i) = -1.0
*/
#include<stdio.h>
#include<math.h>
typedef struct{
    float r;
    float v;
}rnum;
rnum add(rnum a,rnum b){
    rnum c;
    c.r=a.r+b.r;
    c.v=a.v+b.v;
    return c;
}
rnum sub(rnum a, rnum b){
    rnum c;
    c.r=a.r-b.r;
    c.v=a.v-b.v;
    return c;
}
rnum mul(rnum a,rnum b){
    rnum c;
    c.r=a.r*b.r-a.v*b.v;
    c.v=a.r*b.v+b.r*a.v;
    return c;
}
rnum div(rnum a,rnum b){
    rnum c,d,e,f;
    d.r=b.r;
    d.v=-b.v;
    e=mul(b,d);
    c=mul(a,d);
    f.r=c.r/e.r;
    f.v=c.v/e.r;
    return f;
}
int main(){
    rnum a,b,c;
    scanf("%f %f %f %f",&a.r,&a.v,&b.r,&b.v);
    c=add(a,b);
    printf("(%.1f%+.1fi) + (%.1f%+.1fi) = ",a.r,a.v,b.r,b.v);
    if(fabs(c.r)<0.1&&fabs(c.v)<0.1)printf("%.1f\n",c.r);
    else if(fabs(c.r)<0.1)printf("%.1fi\n",c.v);
    else if(fabs(c.v)<0.1)printf("%.1f\n",c.r);
    else printf("%.1f%+.1fi\n",c.r,c.v);
    c=sub(a,b);
    printf("(%.1f%+.1fi) - (%.1f%+.1fi) = ",a.r,a.v,b.r,b.v);
    if(fabs(c.r)<0.1&&fabs(c.v)<0.1)printf("%.1f\n",c.r);
    else if(fabs(c.r)<0.1)printf("%.1fi\n",c.v);
    else if(fabs(c.v)<0.1)printf("%.1f\n",c.r);
    else printf("%.1f%+.1fi\n",c.r,c.v);
    c=mul(a,b);
    printf("(%.1f%+.1fi) * (%.1f%+.1fi) = ",a.r,a.v,b.r,b.v);
    if(fabs(c.r)<0.1&&fabs(c.v)<0.1)printf("%.1f\n",c.r);
    else if(fabs(c.r)<0.1)printf("%.1fi\n",c.v);
    else if(fabs(c.v)<0.1)printf("%.1f\n",c.r);
    else printf("%.1f%+.1fi\n",c.r,c.v);
    c=div(a,b);
    printf("(%.1f%+.1fi) / (%.1f%+.1fi) = ",a.r,a.v,b.r,b.v);
    if(fabs(c.r)<0.1&&fabs(c.v)<0.1)printf("%.1f\n",c.r);
    else if(fabs(c.r)<0.1)printf("%.1fi\n",c.v);
    else if(fabs(c.v)<0.1)printf("%.1f\n",c.r);
    else printf("%.1f%+.1fi\n",c.r,c.v);
    
    
}