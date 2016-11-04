#!/usr/bin/python
import sys
import random

random.seed(' '.join(sys.argv).__hash__())

N = int(sys.argv[1])
attacker = []
defender = []
for i in range(N):
    dice = random.randint(1, 6)
    attacker.append(dice)
    dice = random.randint(1, 6)
    defender.append(dice)
print(N)
print(' '.join(str(d) for d in attacker))
print(' '.join(str(d) for d in defender))
