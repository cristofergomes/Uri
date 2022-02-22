# -*- coding: utf-8 -*-
"""
Created on Fri Feb 11 18:24:06 2022

@author: Cris

URI 1134
"""

entrada = int(input(""))
alc = 0
gas = 0
die = 0

while entrada != 4:
    if entrada == 1:
        alc = alc+1
    if entrada == 2:
        gas = gas+1
    if entrada == 3:
        die = die+1
    if entrada !=4:
        entrada = int(input(""))

print("MUITO OBRIGADO")
print("Alcool: %d"%alc)
print("Gasolina: %d"%gas)
print("Diesel: %d"%die)
