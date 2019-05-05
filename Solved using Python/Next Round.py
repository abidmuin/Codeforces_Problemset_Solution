# -*- coding: utf-8 -*-
"""
Created on Sun May  5 14:15:55 2019

@author: muin
"""

#https://codeforces.com/problemset/problem/158/A

n, k = map(int, input().split())
x = [int(i) for i in input().split()]

count = 0

for l in range(0, n, 1):
    if(x[l]>=x[k-1] and x[l]!=0):
        count = count+1
    else:
        continue

print(count)