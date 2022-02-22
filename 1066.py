# -*- coding: utf-8 -*-
"""
Created on Wed Nov 17 18:17:16 2021

@author: Cris
"""

v = input("")
v = int(v)
w = input("")
w = int(w)
x = input("")
x = int(x)
y = input("")
y = int(y)
z = input("")
z = int(z)

par = 0
impar = 0
positivo = 0
negativo = 0

if (v>0):
    positivo = positivo+1
if (w>0):
    positivo = positivo+1
if (x>0):
    positivo = positivo+1
if (y>0):
    positivo = positivo+1
if (z>0):
    positivo = positivo+1

if (v<0):
    negativo = negativo+1
if (w<0):
    negativo = negativo+1
if (x<0):
    negativo = negativo+1
if (y<0):
    negativo = negativo+1
if (z<0):
    negativo = negativo+1

if(v%2 == 0):
    par = par+1
else:
    impar = impar+1
if( w%2 == 0):
    par = par+1
else:
    impar = impar+1
if(x%2 == 0):
    par = par+1
else:
    impar = impar+1
if(y%2 == 0):
    par = par+1
else:
    impar = impar+1
if(z%2 == 0):
    par = par+1
else:
    impar = impar+1

print(par,"valor(es) par(es)")
print(impar,"valor(es) impar(es)")
print(positivo,"valor(es) positivo(s)")
print(negativo,"valor(es) negativo(s)")
    
