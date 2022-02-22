# -*- coding: utf-8 -*-
"""
Created on Tue Feb  8 18:11:39 2022

@author: Cris

URI 1096
"""
n = 0
I = 0
J = 1
for m in range(3):
    print("I=%d " %I,end="")
    print("J=%d" %J)
    J = J+1
J = 1.0
I = I+0.2
J = J+I

while I < 1:  
    for n in range(3):
        print("I=%0.1f " %I,end="")
        print("J=%0.1f" %J)
        J = J+1
    J = 1.0
    I = float(I) +0.2
    J = J+I

for m in range(3):
    print("I=%d " %I,end="")
    print("J=%d" %J)
    J = J+1
J = 1.0
I = I+0.2
J = J+I


while I < 1.9:  
    for n in range(3):
        print("I=%0.1f " %I,end="")
        print("J=%0.1f" %J)
        J = J+1
    
    J = 1.0
    I = float(I) +0.2
    J = J+I

I=2
for m in range(3):
    print("I=%d " %I,end="")
    print("J=%d" %J)
    J = J+1