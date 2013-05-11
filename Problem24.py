# -*- coding: utf-8 -*-

if __name__ == "__main__":
    fact = []
    n = 1
    for i in range(1, 10):
        n *= i
        fact.append(n)
    fact.reverse()
    a = 1000000-1
    nums = [str(i) for i in range(10)]
    result = ''
    for i in fact:
        b = a // i
        a %= i
        result += nums.pop(b)
    result += nums.pop()
    print(result)