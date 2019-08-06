'''
输入一个整数和进制，转换成十进制输出
输入格式:
在一行输入整数和进制
输出格式:
在一行十进制输出结果
输入样例:
在这里给出一组输入。例如：
45,8
输出样例:
在这里给出相应的输出。例如：
37
'''
import math
n,base=map(int,input().split(','))
s=0
def f(n,x):#假设最多三位
	global s
	for i in range(0,3):
		s+=n%10*math.pow(base,i)
		n=n//10
f(n,base)		
	
print(int(s))
