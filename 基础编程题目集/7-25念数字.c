/*
输入一个整数，输出每个数字对应的拼音。当整数为负数时，先输出fu字。十个数字对应的拼音如下：
0: ling
1: yi
2: er
3: san
4: si
5: wu
6: liu
7: qi
8: ba
9: jiu
输入格式：
输入在一行中给出一个整数，如：1234。
提示：整数包括负数、零和正数。
输出格式：
在一行中输出这个整数对应的拼音，每个数字的拼音之间用空格分开，行末没有最后的空格。如 yi er san si。
输入样例：
-600
输出样例：
fu liu ling ling
*/
#include<stdio.h>
int main(){
    char* s[]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    char *a[31];
    int k=0;
    int temp;
    int n;
    scanf("%d",&n);
    if(n==0){
        printf("%s",s[0]);
        return 0;
    }
    else if(n>0){
        while(n){
            temp=n%10;
            n=n/10;
            a[k]=s[temp];
            k++;
        }
    }
    else {
        n=abs(n);
        while(n){
            temp=n%10;
            n=n/10;
            a[k]=s[temp];
            k++;
        }
        a[k]="fu";
        k++;
    }
    for(k--;k>=0;k--){
        printf("%s",a[k]);
        if(k!=0)printf(" ");
    }
    return 0;
}