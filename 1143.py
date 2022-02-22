# -*- coding: utf-8 -*-
"""
Created on Tue Feb 22 19:32:22 2022

@author: Cris

Uri 1143
"""

n = int(input(""))

for i in range(1,n+1,1):
    i_2 = i**2
    i_3 = i**3
    print("%d "%i,end="")
    print("%d "%i_2,end="")
    print("%d"%i_3)