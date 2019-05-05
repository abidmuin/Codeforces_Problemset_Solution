# -*- coding: utf-8 -*-
"""
Created on Sun May  5 09:31:48 2019

@author: muin
"""

#https://codeforces.com/problemset/problem/71/A


n = int(input())

for i in range(0,n):
    string = input()
    if(len(string)<=10):
        print(string)
    else:
        print(string[0],(len(string)-2),string[(len(string)-1)], sep="")
