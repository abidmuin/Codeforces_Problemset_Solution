# -*- coding: utf-8 -*-
"""
Created on Sun May  5 18:55:01 2019

@author: muin
"""

#https://codeforces.com/problemset/problem/118/A

string = input()
string = string.lower()
s = list(string)
print(s)

for i in range(0,len(s),1):
    if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u' or s[i]=='y'):
        s.remove(s[i])
        s.insert(i,'')
    else:
        continue        

letter = [chr(k) for k in range(ord('a'),ord('z')+1)]

s.insert(0,'.')

for l in range(0,len(s)-1):    
    if(s[l] in letter and s[l+1] in letter):
        s.insert(l+1, '.')
        print("inside IF, index[",l,"]=>", s[l])
    elif(s[l] in letter):
        s.insert(l+1,'.')
        del (s[l+2])
        print("inside ELIF, index[",l,"]=>", s[l])
    else:
        print("inside ELSE, index[",l,"]=>", s[l])
        continue

outputString = ''.join(s)

print("\nOutput:", outputString)