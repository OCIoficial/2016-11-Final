import sys
import random

random.seed(" ".join(sys.argv).__hash__())

#Lectura de parametros
N=int(sys.argv[1])
T=int(sys.argv[2])
K=int(sys.argv[3])
A=int(sys.argv[4])

#Primera linea del input
print(N,T,K)

#Segunda linea con T numeros
starts=list(range(1,N+1))
random.shuffle(starts)
starts=starts[0:T]
print(*starts)

#Tercera linea con la cantidad de aristas
print(A)

#Construccion de las A aristas
edges=[]
for i in range(1,N+1):
	for j in range(i+1,N+1):
		o=random.randint(0,1)
		if (o==0):
			edges.append((i,j))
		else:
			edges.append((j,i))

random.shuffle(edges)

#Imprimir las A aristas
for i in range(A):
	print(edges[i][0],edges[i][1])