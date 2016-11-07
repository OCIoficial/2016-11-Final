#!/usr/bin/python
import sys
import random

random.seed(' '.join(sys.argv).__hash__())

N = int(sys.argv[1])
attacker = []
defender = []
for i in range(N):
    attacker.append(random.randint(1, 6))
    defender.append(random.randint(1, 6))
sorted(attacker)
sorted(defender)
print(N)
for i in range(N):
    print(attacker[i], defender[i])
