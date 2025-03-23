from math import *
from collections import *
from sys import *
from os import *


def f(n):
    lf = [1,1]
    for i in range(2,n):
        lf.append(lf[-1]+lf[-2])
    return lf[n-1]
    # return lf

n = int(input())
ans = f(n)
print(ans)


## Read input as specified in the question.
## Print output as specified in the question.
