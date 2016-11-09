#!/usr/bin/python
import sys
import random

random.seed(' '.join(sys.argv).__hash__())

N = int(sys.argv[1])
F = int(sys.argv[2])
G_MAX = int(sys.argv[3])

permutation = list(range(90001))
random.shuffle(permutation)

gears = sorted(permutation[0:N], reverse=True)

queries = []
for i in range(F):
    queries.append(random.randint(0, gears[0]))

print('%d %d' % (N, F))
print(' '.join([str(g) for g in gears]))
print(' '.join([str(m) for m in queries]))
