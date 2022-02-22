"""
Created on Fri Feb 11 18:24:06 2022

@author: Cris

URI 1132
"""
soma = 0
a = int(input(""))
b = int(input(""))
if a > b:
    y = a
    x = b
else:
    y = b
    x = a
for i in range(x,y+1,1):
    if i%13 != 0:
        soma = soma + i
print(soma)
