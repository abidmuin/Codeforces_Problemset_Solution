# -*- coding: utf-8 -*-
"""
Created on Sun May  5 08:43:29 2019

@author: muin
"""

w = int (input())   #Weight of the watermelon.

if(w>0 and w<=100 and w!=2 and w%2 == 0):   #Each of the divided portion needs to be evenly weighted. That's why, w!=2
    print("YES")
else:
    print("NO")