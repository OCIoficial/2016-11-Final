#!/usr/bin/python

# prefix.py N M P S test_code
# N = length of first sequence
# M = length of second sequence
# P = length of common prefix
# S = length of common suffix
# P + S < min(N, M)
# The shortest is prefix of the longest

import sys
import random

def gen_different():
    s = set()
    for i in range(4):
        a = random.randint(0, 255)
        while a in s:
            a = random.randint(0, 255)
        s.add(a)
    return list(s)


random.seed(' '.join(sys.argv).__hash__())

N = int(sys.argv[2])
M = int(sys.argv[3])
P = int(sys.argv[4])
S = int(sys.argv[5])

if not 1 <= N <= 50 or not 1 <= M <= 50:
    print('Bad length', file=sys.stderr)
    sys.exit(1)
if P + S >= N or P + S >= M:
    print('Prefix + suffix is greater or equal than length', file=sys.stderr)
    sys.exit(1)

# Common prefix
prefix = []
for i in range(P):
    prefix.append(random.randint(0, 255))

# Common suffix
suffix = []
for i in range(S):
    suffix.append(random.randint(0, 255))

# Differentiate mid section in first character
(a, b, c, d) = gen_different()
mid_first = [a]
mid_second = [b]

# Random mid section
for i in range(N - (P + S) - 2):
    mid_first.append(random.randint(0, 255))

for i in range(M - (P + S) - 2):
    mid_second.append(random.randint(0, 255))

# Differentiate last character with care if
# mid section is of length 1
if N > P + S + 1:
    mid_first.append(c)
if M > P + S + 1:
    mid_second.append(d)

# Print sequences
first = prefix + mid_first + suffix
second = prefix  + mid_second + suffix

if first == second:
    print('Sequences are equal', file=sys.stderr)
    sys.exit(1)
if len(first) != N:
    print('First sequence had bad length (%s, %s)' % (N, len(first)), file=sys.stderr)
    sys.exit(1)
if len(second) != M:
    print('Second sequence had bad length (%s, %s)' % (N, len(second)), file=sys.stderr)
    sys.exit(1)

print(N, M)
print(' '.join(str(i) for i in first))
print(' '.join(str(i) for i in second))
