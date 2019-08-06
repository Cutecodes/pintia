'''
本题要求编写程序，计算序列 1 + 1/3 + 1/5 + ... 的前N项之和。
输入格式:
输入在一行中给出一个正整数N。
输出格式:
在一行中按照“sum = S”的格式输出部分和的值S，精确到小数点后6位。题目保证计算结果不超过双精度范围。
输入样例:
23
输出样例:
sum = 2.549541
'''
n=int(input())
sum=0
for i in range(0,n):
	sum+=1/(2*i+1)
print('sum = %.6f'%sum)
