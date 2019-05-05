# -*- coding: utf-8 -*-
"""
Created on Sun May  5 09:01:46 2019

@author: muin
"""

#https://codeforces.com/problemset/problem/1/A

import math

n, m, a = map(int, input().split())
#print(n, m, a)

x = math.ceil(n/a)
y = math.ceil(m/a)

print(x*y)