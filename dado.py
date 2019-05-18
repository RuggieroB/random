'''

# random

# Programmi di Laboratorio di Programmazione. Alunno: Bucchianico Enrico Ruggiero, 4^Finf.


	random

	Programmi di Laboratorio di Programmazione. Alunno: Bucchianico Enrico Ruggiero, 4^Finf.


		Programma "dado.py": Programma in Linguaggio "Python" (PY) che lanca un dado di "n" facce. "n" deve essere chiesto in input all'utente e deve essere maggiore di 1.

'''

import random

n=0

print("Lancia un dado di \"n\" facce\n\n\n")

while n<=1:
	n=input("n=\t")
	n=int(n)

print("Lancia un dado di \"",n,"\" facce\n\n")

print("Numero casuale:\t",random.randrange(1,n+1),"\n")