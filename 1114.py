# -*- coding: utf-8 -*-
"""
Created on Thu Feb 10 18:35:13 2022

@author: Cris

URI 1114
"""


senha = 2002
entrada = int(input(""))
if entrada == senha:
    print("Acesso Permitido")
else:
    print("Senha Invalida")
while entrada != senha:
    entrada = int(input(""))
    if entrada == senha:
        print("Acesso Permitido")
    else:
        print("Senha Invalida")
