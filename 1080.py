# -*- coding: utf-8 -*-
"""
Created on Mon Feb  7 17:30:27 2022

@author: Cris

URI 1080
"""


old_number = 0
for i in range(100):
    number = int(input(""))
    if number > old_number:
        old_number = number
        pos_input = i+1
        
print(old_number)
print(pos_input)