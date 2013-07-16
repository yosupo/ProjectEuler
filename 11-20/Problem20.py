# -*- coding: utf-8 -*-
from datetime import date, timedelta
from calendar import monthrange

if __name__ == "__main__":
    k = 1
    for i in range(1, 100):
        k *= i
    s = str(k)
    k = 0
    for i in map(int, s):
        k += i
    print(k)
