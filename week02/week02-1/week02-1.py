#python version
print("請輸入兩個整數") # 先印中文，提示你輸入
a, b = list(map(int, input().split()))
print("你輸入了兩個整數，直式加法:");
print(f'{a:5}') # 印出來，5格的整數，後面\跳行
print(f'{b:5}') # 印出來，5格的整數，後面\跳行
print("-------"); # 印一堆減號，後面\跳行
print(f'{a+b:5}'); # 印出來，5格的整數，後面\跳行