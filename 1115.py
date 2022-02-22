# -*- coding: utf-8 -*-
"""
Created on Thu Feb 10 18:35:13 2022

@author: Cris

URI 1115
"""

entrada = input("")
x,y = entrada.split()
x = int(x)
y = int(y)
while x != 0 and y != 0:
    if x > 0:
        if y > 0:
            print("primeiro")
        if y < 0:
            print("quarto")
    if x < 0:
        if y > 0:
            print("segundo")
        if y < 0:
            print("terceiro")           
    entrada = input("")
    x,y = entrada.split()    
    x = int(x)
    y = int(y)
