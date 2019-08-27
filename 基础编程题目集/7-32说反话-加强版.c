/*
给定一句英语，要求你编写程序，将句中所有单词的顺序颠倒输出。
输入格式：
测试输入包含一个测试用例，在一行内给出总长度不超过500 000的字符串。字符串由若干单词和若干空格组成，其中单词是由英文字母（大小写有区分）组成的字符串，单词之间用若干个空格分开。
输出格式：
每个测试用例的输出占一行，输出倒序后的句子，并且保证单词间只有1个空格。
输入样例：
Hello World   Here I Come
输出样例：
Come I Here World Hello
*/
#include<stdio.h>
#include<string.h>
char a[500010],t[500010];
int main(){
    int l;
    int k=0;
    int count=0;
    gets(a);
    l=strlen(a);
    for(int i=l-1;i>=0;i--){
        if(a[i]!=' '){
            t[k]=a[i];
            k++;
        }
        else if(a[i]==' ' && k!=0){
            if(count==0)
            for(int j=k-1;j>=0;j--)
                printf("%c",t[j]);
            else {
                printf("%c",' ');
                for(int j=k-1;j>=0;j--)
                    printf("%c",t[j]);
            }
            count++;
            k=0;
        }
    }
    if(count ==0 && k!=0)for(int j=k-1;j>=0;j--)
                printf("%c",t[j]);
    else if(count!=0 && k!=0){
                printf("%c",' ');
                for(int j=k-1;j>=0;j--)
                    printf("%c",t[j]);
            }
    return 0;
}