import sys
import random

random.seed(" ".join(sys.argv).__hash__())

N=int(sys.argv[1])
K=int(sys.argv[2])

print(N,N,K,1)

edges=[]
for i in range(1,N+1):
	j=(i%N)+1
	o=random.randint(0,1)
	if (o==0):
		edges.append((i,j))
	else:
		edges.append((j,i))

random.shuffle(edges)

for i in range(N):
	print(edges[i][0],edges[i][1])

print(random.randint(1,N))


	