#瘋狂程設-----(A030) 百數反印 : 輸入100個正整數，反向印出此100個數。 python version

a = list(map(int,input().split()))

for i in range(99, -1, -1):
	print(a[i])