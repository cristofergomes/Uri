# -*- coding: utf-8 -*-
"""
Created on Wed Nov 10 08:47:15 2021

@author: Cris
"""

def media(u,v,w,x,y,z,a):
    media = (u+v+w+x+y+z)/a
    return(media)

count = 0
u = input("")
u = float(u)
if (u>0):
    count = count+1
else:
     u = 0
v = input("")
v = float(v)
if (v>0):
    count = count+1
else:
    v = 0
w = input("")
w = float(w)
if (w>0):
    count = count+1
else:
    w = 0
x = input("")
x = float(x)
if (x>0):
    count = count+1
else:
    x = 0
y = input("")
y = float(y)
if (y>0):
    count = count+1
else:
    y = 0
z = input("")
z = float(z)
if (z>0):
    count = count+1
else:
    z = 0
    
print(count, "valores positivos")
media = media(u,v,w,x,y,z,count)
print("%0.1f" %media)
 
