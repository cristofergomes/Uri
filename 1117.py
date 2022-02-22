# -*- coding: utf-8 -*-
"""
Created on Thu Feb 10 18:35:13 2022

@author: Cris

URI 1117
"""

nota = -1

while nota < 0 or nota > 10:
    nota = float(input(""))
    if nota < 0 or nota > 10:
        print("nota invalida")
    else:
        nota_1 = nota

nota = -1

while nota < 0 or nota > 10:
    nota = float(input(""))
    if nota < 0 or nota > 10:
        print("nota invalida")
    else:
        nota_2 = nota

media = (nota_1 + nota_2)/2

print("media = %0.2f"%media)
