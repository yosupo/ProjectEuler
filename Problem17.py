# -*- coding: utf-8 -*-

if __name__ == "__main__":
    c = 1
    for i in range(0, 1000):
        c *= 2
    x = 0
    while c:
        x += c % 10
        c //= 10
    print(x)
