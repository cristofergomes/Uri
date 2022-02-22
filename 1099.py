# -*- coding: utf-8 -*-
"""
Created on Wed Feb  9 16:56:34 2022

@author: Cris

URI 1099
"""

N = int(input(""))

for i in range(N):
    entrada = input("")
    x,y = entrada.split()
    x = int(x)
    y = int(y)
    if(x>y):
        soma = 0
        a = y+1
        for j in range(a, x, 1):
            if j%2 == 1:
                soma = soma+j
    if(x<=y):
        soma = 0
        b = x+1
        for j in range(b, y, 1):
            if j%2 == 1:
                soma = soma+j
    print(soma)