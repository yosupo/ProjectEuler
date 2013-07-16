# -*- coding: utf-8 -*-

if __name__ == "__main__":
    special = (0, 3, 3, 5, 4, 4, 3, 5, 5, 4,
               3, 6, 6, 8, 8, 7, 7, 9, 8, 8)
    ten = (0, 0, 6, 6, 5, 5, 5, 7, 6, 6)
    count = 0
    for i in range(1, 1001):
        x = 0
        digit = list(map(int, str(i)))
        digit.reverse()
        if (i // 1000):
            x += special[digit[3]] + 8
            i %= 1000
        if (i // 100):
            x += special[digit[2]] + 7
            i %= 100
            if (i):
                x += 3
        if (i < 20):
            x += special[i]
        else:
            x += ten[digit[1]]
            if (digit[0]):
                x += special[digit[0]]
        count += x
    print(count)
