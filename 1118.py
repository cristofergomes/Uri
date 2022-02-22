# -*- coding: utf-8 -*-
"""
Created on Fri Feb 11 18:24:06 2022

@author: Cris

URI 1118
"""
rep = 1

while rep == 1:
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
    rep = input("novo calculo (1-sim 2-nao)\n")
    rep = int(rep)
    
    while rep <= 0 or rep > 2:
        rep = input("novo calculo (1-sim 2-nao)\n")
        rep = int(rep)
 
