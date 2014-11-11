__author__ = 'qqy'

import random

NUM_POINT = 1000000 
atom_list = ['H', 'O']


def main():
    with open('large.xyz', 'w') as f:
        f.write(str(NUM_POINT) + '\n')
        f.write("Some random " + str(NUM_POINT) + "atoms\n")
        for i in xrange(NUM_POINT):
            atom = atom_list[random.randint(0,1)]
            x = random.uniform(-2, 2)
            y = random.uniform(-2, 2)
            z = random.uniform(-2, 2)
            line = (atom, str(x), str(y), str(z))
            print line
            f.write(' '.join(line) + '\n')

if __name__ == '__main__':
    main()
