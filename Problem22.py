# -*- coding: utf-8 -*-

if __name__ == '__main__':
    result = 0
    file = open('names.txt', 'r')
    s = [name.strip('"') for name in file.read().split(',')]
    s.sort()
    for u, str in enumerate(s):
        for c in str:
            result += (ord(c) - ord('A') + 1) * (u + 1)
    print(result)
