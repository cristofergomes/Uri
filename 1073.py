# -*- coding: utf-8 -*-
"""
Created on Thu Nov 18 15:27:53 2021

@author: Cris

Uri 1073
"""

N = int(input(""))

for i in range(N):
    numerador = i+1
    if(numerador%2 == 0):
        quadrado = (numerador)**2
        print("%d^2" %numerador, "=", quadrado)