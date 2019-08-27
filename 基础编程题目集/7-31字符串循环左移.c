/*
输入一个字符串和一个非负整数N，要求将字符串循环左移N次。
输入格式：
输入在第1行中给出一个不超过100个字符长度的、以回车结束的非空字符串；第2行给出非负整数N。
输出格式：
在一行中输出循环左移N次后的字符串。
输入样例：
Hello World!
2
输出样例：
llo World!He
*/
#include<stdio.h>
#include<string.h>
int main(){
    char s[110];
    char temp;
    int n,l;
    gets(s);
    scanf("%d",&n);
    l=strlen(s);
    for(int i=0;i<n;i++){
        temp=s[0];
        for(int j=1;j<l;j++)
        s[j-1]=s[j];
        s[l-1]=temp;
    }
    puts(s);
    return 0;


}
