/*
一群猴子要选新猴王。新猴王的选择方法是：让N只候选猴子围成一圈，从某位置起顺序编号为1~N号。从第1号开始报数，每轮从1报到3，凡报到3的猴子即退出圈子，接着又从紧邻的下一只猴子开始同样的报数。如此不断循环，最后剩下的一只猴子就选为猴王。请问是原来第几号猴子当选猴王？
输入格式：
输入在一行中给一个正整数N（≤1000）。
输出格式：
在一行中输出当选猴王的编号。
输入样例：
11
输出样例：
7
*/
#include<stdio.h>
typedef struct listnode *np;
struct listnode{
    int num;
    np next;
};
typedef struct listnode node;
node l[1010];
int main(){
    int n;
    int i=1;
    np p=&l[1];
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i!=n ){
            l[i].num=i;
            l[i].next=&l[i+1];
        }
        else{
            l[i].num=i;
            l[i].next=&l[1];
        }
    }
    while(n-1){
        if(i==2){

            n--;
            i=1;
            p->next=(p->next)->next;
            p=p->next;
        }
        else {
            i++;
            p=p->next;
        }
    }
    printf("%d",p->num);
    return 0;
}