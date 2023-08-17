#!/usr/bin/python3
def palind():
    plindrom = 0
    number_i = 0
    number_j = 0
    for i in range(900,1000):
        for j in range(900, 1000):
            number = i * j
            number2 = str(number)
            lst1 = [int(x) for x in number2]
            lst2 = reversed(lst1);
            check = 0
            for x, y in zip(lst1, lst2):
                if x != y:
                    check = 1
            if check == 0:
                number_i = i
                number_j = j
                plindrom = number
    return plindrom
palindrome = palind()
fpali = open('102-result', "w")
fpali.write(str(palindrome))
