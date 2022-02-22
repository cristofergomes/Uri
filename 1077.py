# -*- coding: utf-8 -*-
"""
Created on Fri Nov 19 08:10:54 2021

@author: Cris

Uri 1074
"""

N = int(input(""))

vetor = list(range(N))
for i in range(N):
    x = int(input(""))
    if(x == 0):
        vetor[i] = ("NULL")
    if(x>0):
        if(x%2 == 0):
            vetor[i] = ("EVEN POSITIVE")
        else:
            vetor[i] = ("ODD POSITIVE")
    if(x<0):
        if(x%2 == 0):
            vetor[i] = ("EVEN NEGATIVE")
        else:
            vetor[i] = ("ODD NEGATIVE")

for i in range(N):
    print(vetor[i])
