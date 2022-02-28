# -*- coding: utf-8 -*-
"""
Created on Mon Feb 28 10:47:12 2022

@author: Cris

URI 1146
"""

x = int(input(""))

while x != 0:
    for i in range(x-1):
        i = i+1
        print("%d "%i, end="")
    if x == 1:
        print(x)
    else:
        print(i+1)
    x = int(input(""))