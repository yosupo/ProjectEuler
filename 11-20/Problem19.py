# -*- coding: utf-8 -*-
from datetime import date, timedelta
from calendar import monthrange

if __name__ == "__main__":
    i = date(1901, 1, 1)
    count = 0
    while i < date(2001, 1, 1):
        if i.weekday() == 6:
            count += 1
        i += timedelta(days = monthrange(i.year, i.month)[1])
    print(count)
