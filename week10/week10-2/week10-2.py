#week10-2 輾轉相除法 Python ver.
#a大 b中 c小 greatest common divisor
def gcd(a, b):
  if a==0: return b;
  if b==0: return a #有人會省略這一行
  return gcd(b, a%b) #老二->老大 老三->老二
a = int(input("請輸入 a 數字: "))
b = int(input("請輸入 b 數字: "))
print("最大公因數是: ", gcd(a, b))