'''
读入2个正整数A和B，1<=A<=9, 1<=B<=10,产生数字AA...A,一共B个A
输入格式:
在一行中输入A和B。
输出格式:
在一行中输出整数AA...A,一共B个A
输入样例1:
在这里给出一组输入。例如：
  1,  5
输出样例1:
在这里给出相应的输出。例如：
11111
输入样例2:
在这里给出一组输入。例如：
        3  ,4
输出样例2:
在这里给出相应的输出。例如：
3333
'''
a,b=map(int,input().split(','))
k=[0,1,11,111,1111,11111,111111,1111111,11111111,111111111,1111111111]
s=a*k[b]
print(s)