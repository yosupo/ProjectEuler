# -*- coding: utf-8 -*-

if __name__ == "__main__":
    d = [list(map(int, s.split())) for s in input().splitlines()[::-1]]
    for i in range(1, len(d)):
        b = d[i-1]
        d[i] = [d[i][j] + max(b[j] ,b[j+1]) for j in range(len(d[i]))]
    print(d[-1])
            
