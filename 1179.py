# -*- coding: utf-8 -*-
"""
Created on Wed Jan 26 21:39:45 2022

@author: Cris

URI 1079
"""

N = int(input(""))

for i in range(N):
    s = input("")
    ## xxx_xxx_xxx   (num num space num num etc)
    ## 0.1 2.3 4.5
    ## 012 3 456 7 89`10`
    a = s[0:3]
    b = s[4:7]
    c = s[8:11]
    a = float(a)
    b = float(b)
    c = float(c)
    media = 0.2*a + 0.3*b + 0.5*c
    print("%0.1f" %media)
    