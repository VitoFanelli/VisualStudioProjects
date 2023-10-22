
# calcolatrice in python

import math
import os

numero = input("\nInserisci un numero: ")
totale = float(numero)

operazione = input("Seleziona un'operazione (+, -, *, /, ^, rq, =): ")

while operazione != "=" :
        
    if operazione == "rq" :
        totale = math.sqrt(totale)
        operazione = input("Seleziona un'operazione (+, -, *, /, ^, rq, =): ")
        continue
    else :
        numero = input("Inserisci un numero: ")
    
    if operazione == "+" : totale = totale + float(numero)
    elif operazione == "-" : totale = totale - float(numero)
    elif operazione == "*" : totale = totale * float(numero)
    elif operazione == "^" : totale = totale ** float(numero)
    elif operazione == "/" : totale = totale / float(numero)
    else : 
        print("Operazione non consentita.")
        break
    
    operazione = input("Seleziona un'operazione (+, -, *, /, ^, rq, =): ")
    
print("\nIl risultato è " + str(totale) + "\n")
os.system("PAUSE")
