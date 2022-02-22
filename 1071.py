# -*- coding: utf-8 -*-
"""
Created on Wed Nov 17 19:03:46 2021

@author: Cris
"""

X = int(input(""))
Y = int(input(""))
soma = 0

if(X>Y):
    if(Y%2 == 0):
        Y = Y-1
        while (Y < X-2):
            Y = Y+2
            soma = soma+Y
    else:
        while (Y < X-2):
            Y = Y+2
            soma = soma+Y
else:
    A = X
    X = Y
    Y = A
    if(Y%2 == 0):
        Y = Y-1
        while (Y < X-2):
            Y = Y+2
            soma = soma+Y
    else:
        while (Y < X-2):
            Y = Y+2
            soma = soma+Y
        
print(soma)