# 2017年10月11日13:06:56
# 本程序的功能：查询指定范围内的水仙花数

for i in range(100,1000):
    bai = i // 100
    shi = (i % 100)//10
    ge = (i % 10) % 10
    if i == bai**3 + shi**3 + ge**3:
        print(i)
