#Week10-1 函式呼叫函式 Recursion 遞回n階層 Python ver.
N = int(input('請輸入N:'))
#以前是用for迴圈寫，今天用[函式呼叫函式]來寫
def func(n):
  if n==1: return 1 #終止條件，像[數學歸納法] N=1成立
  return n * func(n-1) #函式呼叫函式， 把大問題，蓋成去問[小問題]
ans = func(N)
print(ans)