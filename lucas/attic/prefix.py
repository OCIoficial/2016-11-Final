#!/usr/bin/python

# prefix.py N M test_code
# N = length of first sequence
# M = length of second sequence
# N must be different to M
# The shortest is prefix of the longest

import sys
import random


random.seed(' '.join(sys.argv).__hash__())

N = int(sys.argv[1])
M = int(sys.argv[2])

if not 1 <= N <= 50 or not 1 <= M <= 50 or N == M:
    sys.exit(1)

first = []
for i in range(min(N, M)):
    first.append(random.randint(0, 255))

second = []
second.extend(first)
for i in range(abs(M - N)):
    second.append(random.randint(0, 255))

if N > M:
    (first, second) = (second, first)
print(N, M)
print(' '.join(str(i) for i in first))
print(' '.join(str(i) for i in second))
