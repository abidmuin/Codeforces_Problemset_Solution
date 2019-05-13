# -*- coding: utf-8 -*-
"""
Created on Sun May 12 18:14:16 2019

@author: muin
"""

#https://codeforces.com/problemset/problem/112/A

#string1, string2 = map(str, input().split())

string1 = input()
string2 = input()

string1 = string1.lower()
string2 = string2.lower()

string1 = list(string1)
string2 = list(string2)

output=0
for i in range(len(string1)):
    if(string1[i]>string2[i]):
        output = 1
        #print(output)
        break
    elif(string1[i]<string2[i]):
        output = -1
        #print(output)
        break
    else:
        continue

print(output)
