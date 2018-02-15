# -*- coding: utf-8 -*-
"""
Created on Thu Feb 15 14:38:03 2018

@author: Sonu
"""

#import numpy as np
from fractions import gcd
from functools import reduce,lru_cache
MOD=10**9+7
t=int(input())
fib=[]
a=[]
@lru_cache(maxsize=None)
def fib(n):
    if(n==0):
        return(0)
    if(n==1):
        return(1)
    if(n&1==1):
        return(((fib((n+1)//2)*fib((n+1)//2))+(fib((n+1)//2-1)*fib((n+1)//2-1)))%MOD)
    else:
        return(fib(n//2)*((fib(n//2))+(2*fib(n//2-1)))%MOD)
for i in range(t):
    a.append(int(input()))
g=gcd(min(a),max(a))
print(fib(g)%MOD)