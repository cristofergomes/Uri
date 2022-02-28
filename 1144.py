# -*- coding: utf-8 -*-
"""
Created on Mon Feb 28 10:09:52 2022

@author: Cris

URI 1144
"""

n = int(input(""))

for i in range(n):
    a = i+1
    b = a**2
    c = a**3
    print("%d "%a, end="")
    print("%d "%b, end="")
    print("%d"%c)
    
    b = b+1
    c = c+1
    
    print("%d "%a, end="")
    print("%d "%b, end="")
    print("%d"%c)