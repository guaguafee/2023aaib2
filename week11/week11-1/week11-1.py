#Week11-1 質數的篩子法 C ver.
#Week11-1.py 想要試試看質數的篩子法，先試試看舊方法
#想數一下10000以下有幾個質數
def isPrime(n):
  for i in range(2,n):
        if n%i==0: return False #被整除，不是質數
  return True

#利用BOUND變數，看看到底要設多大的範圍，30萬才能找到2萬個質數
BOUND = 300000
ans = 0
for i in range(2,BOUND):
  if isPrime(i):
    print(i, end=' ') #印出質數
    ans+=1 #同時多加一個質數
print()
print("質數有:", ans, "個\n")