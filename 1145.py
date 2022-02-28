# -*- coding: utf-8 -*-
"""
Created on Mon Feb 28 10:22:02 2022

@author: Cris

URI 1145
"""

entrada = input("")
x,y = entrada.split()
x = int(x)
y = int(y)
i = 1
while i<=y:
    for j in range(x-1):
        if i <=y:            
            print("%d "%i, end="")
            i = i+1
    if i <=y: 
        print(i)
        i = i+1