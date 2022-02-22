# -*- coding: utf-8 -*-
"""
Created on Wed Dec  1 20:49:43 2021

@author: Cris

URI 1131
"""

inter, gremio = input("").split()
inter = int(inter)
gremio = int(gremio)

v_inter = 0
v_gremio = 0
empate = 0

if(inter>gremio):
    v_inter += 1
if(gremio>inter):
    v_gremio +=1
if(gremio == inter):
    empate += 1

num_grenal = 1

grenal = 1

while grenal < 2:
    grenal = int(input("Novo grenal (1-sim 2-nao)"))
    print("")
    if grenal == 2:
        break
    inter, gremio = input("").split()
    inter = int(inter)
    gremio = int(gremio)
    num_grenal += 1
    if(inter>gremio):
        v_inter += 1
    if(gremio>inter):
        v_gremio +=1
    if(gremio == inter):
        empate += 1
        
print(f"{num_grenal} grenais")
print(f"Inter:{v_inter}")
print(f"Gremio:{v_gremio}")
print(f"Empates:{empate}")

if v_inter > v_gremio:
    print("Inter venceu mais")
if v_gremio > v_inter:
    print("Gremio venceu mais")
if v_gremio == v_inter:
    print("Nao houve vencedor")

    