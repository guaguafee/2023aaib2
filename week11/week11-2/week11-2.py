#Week11-2  篩子法
#Week11-2.py
BOUND = 20000
table = [True] * BOUND
ans = 0
for i in range(2,BOUND):
  if table[i]==True:
    ans += 1
    for k in range(i*i, BOUND, i):
      table[k] = False
print('質數有:', ans, '個')