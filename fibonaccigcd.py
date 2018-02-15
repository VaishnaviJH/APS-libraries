# -*- coding: utf-8 -*-
"""
Created on Thu Jan 25 23:31:28 2018

@author: Sonu
"""

import numpy as np
t=int(input())
a=[]
for i in range(t):
    a.append(int(input()))
n=max(a)
fib=np.ones(n)
for i in range(2,n):
    fib[i]=fib[i-1]+fib[i-2]
r=[]
for i in range(t):
    r.append(fib[a[i]-1])