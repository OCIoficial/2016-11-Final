import sys
import random

random.seed(" ".join(sys.argv).__hash__())

# Lectura de parametros
N = int(sys.argv[1])
T = 1
K = int(sys.argv[2])
A = N-1

# Primera linea del input
print(N, T, K)

# Segunda linea con T numeros
starts = list(range(1, N+1))
random.shuffle(starts)
starts = starts[0:T]
print(*starts)

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
