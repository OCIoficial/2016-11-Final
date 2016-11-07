import sys
import random

random.seed(" ".join(sys.argv).__hash__())

N=int(sys.argv[1])
E=int(sys.argv[2])
K=int(sys.argv[3])
T=int(sys.argv[4])

print(N,E,K,T)

edges=[]
for i in range(1,N+1):
	for j in range(i+1,N+1):
		o=random.randint(0,1)
		if (o==0):
			edges.append((i,j))
		else:
			edges.append((j,i))

random.shuffle(edges)

for i in range(E):
	print(edges[i][0],edges[i][1])

starts=list(range(1,N+1))
random.shuffle(starts)
starts=starts[0:T]
print(*starts)