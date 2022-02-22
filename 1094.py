# -*- coding: utf-8 -*-
"""
Created on Mon Feb  7 17:36:53 2022

@author: Cris

URI 1094
"""

total_coelhos = 0
total_sapos = 0
total_ratos = 0

N = int(input(""))

for i in range(N):
    caso_teste = input("")
    num_casos,animal = caso_teste.split()   
    num_casos = int(num_casos)
    
    if animal == "S":
        total_sapos = total_sapos+num_casos
    
    if animal == "C":
        total_coelhos = total_coelhos+num_casos
        
    if animal == "R":
        total_ratos = total_ratos+num_casos
        
total = total_ratos+total_coelhos+total_sapos    
p_coelhos = 100*total_coelhos/total
p_ratos = 100*total_ratos/total
p_sapos = 100*total_sapos/total

print("Total: %d cobaias" %total)
print("Total de coelhos: %d" %total_coelhos)
print("Total de ratos: %d" %total_ratos)
print("Total de sapos: %d" %total_sapos)
print("Percentual de coelhos: %0.2f %%" %p_coelhos)
print("Percentual de ratos: %0.2f %%" %p_ratos)
print("Percentual de sapos: %0.2f %%" %p_sapos)