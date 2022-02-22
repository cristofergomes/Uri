# -*- coding: utf-8 -*-
"""
Created on Thu Feb 10 18:35:13 2022

@author: Cris

URI 1113
"""

entrada =  input("")
x,y = entrada.split()
x = int(x)
y = int(y)
sub = x-y

if sub != 0:
    while sub != 0:
        if x > y:
            print("Decrescente")
        else:
            print("Crescente")
        
        entrada =  input("")
        x,y = entrada.split()
        x = int(x)
        y = int(y)
        sub = x-y
