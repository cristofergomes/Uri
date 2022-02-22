# -*- coding: utf-8 -*-
"""
Created on Fri Feb 11 18:24:06 2022

@author: Cris

URI 1133
"""
soma = 0
a = int(input(""))
b = int(input(""))
if a > b:
    y = a
    x = b
else:
    y = b
    x = a
for i in range(x+1,y,1):
    if i%5 == 2 or i%5 == 3:
        print(i)
