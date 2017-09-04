import sys
import random

random.seed(" ".join(sys.argv).__hash__())

# Lectura de parametros
N = int(sys.argv[2])
T = 1
K = int(sys.argv[3])
A = N-1
S = int(sys.argv[4])

# Primera linea del input
print(N, T, K)

# Segunda linea con T numeros
print(S)

# Tercera linea con la cantidad de aristas
print(A)

# Construccion de las A aristas
edges = []
for i in range(1, N):
    j = i+1
    edges.append((i, j))

#Imprimir las A aristas
for i in range(A):
    print(edges[i][0],edges[i][1])
