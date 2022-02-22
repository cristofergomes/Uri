# -*- coding: utf-8 -*-
"""
Created on Thu Feb 10 18:35:13 2022

@author: Cris

URI 1116
"""

n = int(input(""))

for i in range(n):
    entrada = input("")
    x,y = entrada.split()
    x = float(x)
    y = float(y)
    
    if y == 0.0:
        print("divisao impossivel")
    else:
        div = x/y
        print("%0.1f"%div)
