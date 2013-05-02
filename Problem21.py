# -*- coding: utf-8 -*-

def divsum(n):
    k = 0
    for i in range(1, n):
        if (n % i) == 0:
            k += i
    return k

if __name__ == "__main__":
    k = 0
    for i in range(1, 10000):
        j = divsum(i)
        if i != j and i == divsum(j):
            k += i
            print(i)
    print(k)
