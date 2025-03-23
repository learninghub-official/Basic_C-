# 378
# 3+7+8 = 18
n = int(input())
sum = 0
for i in str(n):
    # print(i)
    sum = sum+int(i)
if (n%sum == 0):
    print(f"{n} is Ok Number")
else:
    print(f"{n} is not Ok Number")
