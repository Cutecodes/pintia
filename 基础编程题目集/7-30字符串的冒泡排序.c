/*
我们已经知道了将N个整数按从小到大排序的冒泡排序法。本题要求将此方法用于字符串序列，并对任意给定的K（<N），输出扫描完第K遍后的中间结果序列。
输入格式：
输入在第1行中给出N和K（1≤K<N≤100），此后N行，每行包含一个长度不超过10的、仅由小写英文字母组成的非空字符串。
输出格式：
输出冒泡排序法扫描完第K遍后的中间结果序列，每行包含一个字符串。
输入样例：
6 2
best
cat
east
a
free
day
输出样例：
best
a
cat
day
east
free
*/
#include<stdio.h>
#include<string.h>
int main()
{
  int n,k;
  char a[101][11];
  char a1[11];
  scanf("%d %d\n",&n,&k);
  for(int i=0;i<n;i++)
    gets(a[i]);
  for(int i=0;i<k;i++)
  for(int j=0;j<n-i-1;j++)
  {
    
    if(strcmp(a[j],a[j+1])>0)
      {
      strcpy(a1,a[j]);
      strcpy(a[j],a[j+1]);
      strcpy(a[j+1],a1);
      }
  }
  for(int i=0;i<n;i++)
      puts(a[i]);
  return 0;
}