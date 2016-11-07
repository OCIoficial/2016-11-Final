import sys
import random

random.seed(" ".join(sys.argv).__hash__())

N=int(sys.argv[1])
E=int(sys.argv[2])
K=int(sys.argv[3])

print(N,E,K,1)

hs=set()
edges=[]
for i in range(2,N+1):
	j=random.randint(1,i);
	o=random.randint(0,1)
	if (o==0):
		edges.append((i,j))
		hs.add((j,i))
	else:
		edges.append((j,i))
		hs.add((j,i))

edges2=[]
for i in range(1,N+1):
	for j in range(i+1,N+1):
		o=random.randint(0,1)
		if (o==0):
			edges2.append((i,j))
		else:
			edges2.append((j,i))

random.shuffle(edges2)

for x in edges2:
	if len(edges)==E:
			break
	if hs.isdisjoint({(min(x[0],x[1]),max(x[0],x[1]))}):
		edges.append(x)
		hs.add((min(x[0],x[1]),max(x[0],x[1])))

random.shuffle(edges)

for i in range(E):
	print(edges[i][0],edges[i][1])

print(random.randint(1,N))