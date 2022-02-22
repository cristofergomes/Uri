# -*- coding: utf-8 -*-
"""
Created on Thu Nov 18 15:18:37 2021

@author: Cris

Uri 1072
"""
N = int(input(""))

dentro_intervalo = 0
fora_intervalo = 0

for i in range(N):
    X = int(input(""))
    if (X>20 or X<10):
        fora_intervalo = fora_intervalo+1
    else:
        dentro_intervalo = dentro_intervalo+1

print(dentro_intervalo,"in")
print(fora_intervalo, "out")