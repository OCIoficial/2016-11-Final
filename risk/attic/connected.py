import sys
import random

random.seed(" ".join(sys.argv).__hash__())

#Lectura de parametros
N = int(sys.argv[1])
T = int(sys.argv[2])
K = int(sys.argv[3])
A = int(sys.argv[4])

#Primera linea del input
print(N,T,K)

#Segunda linea con T numeros
starts = list(range(1,N+1))
random.shuffle(starts)
starts = starts[0:T]
print(*starts)

#Tercera linea con la cantidad de aristas
print(A)

#Construccion de las A aristas
hs = set()
edges = []
for i in range(2,N+1):
    j = random.randint(1,i-1)
    o = random.randint(0,1)
    if (o == 0):
        edges.append((i,j))
        hs.add((j,i))
    else:
        edges.append((j,i))
        hs.add((j,i))

edges2 = []
for i in range(1,N+1):
    for j in range(i+1,N+1):
        o = random.randint(0,1)
        if (o == 0):
            edges2.append((i,j))
        else:
            edges2.append((j,i))

random.shuffle(edges2)

for x in edges2:
    if len(edges) == A:
        break
    if hs.isdisjoint({(min(x[0],x[1]),max(x[0],x[1]))}):
        edges.append(x)
        hs.add((min(x[0],x[1]),max(x[0],x[1])))

random.shuffle(edges)

#Imprimir las A aristas
for i in range(A):
    print(edges[i][0],edges[i][1])


