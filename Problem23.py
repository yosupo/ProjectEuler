# -*- coding: utf-8 -*-
import time
def isabun(n):
    divs = [1]
    for i in range(2, n):
        if (n % i) == 0:
            if i in divs:
                break
            divs.append(i)
            if n // i in divs:
                break
            divs.append(n // i)
    return sum(divs) > n

if __name__ == "__main__":
    result = 0
    cache = [isabun(i) for i in range(0, 28124)]
    abuns = [i for i in range(1, 28124) if cache[i]]
    for i in range(1, 28123):
        for j in abuns:
            if i / 2 < j:
                result += i
                break
            if cache[i - j]:
                break
    print(result)
