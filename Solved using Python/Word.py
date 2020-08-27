"""
@author [https://github.com/muin2473]
Email: muin.739@gmail.com
Created on 2020-08-28 01:25:26
Modified on 2020-08-28 01:25:26

"""
# https: // codeforces.com/problemset/problem/59/A
#!/bin/bash/python3

input_word = input().strip()


def checkCase(word):
    capital_letter = 0
    small_letter = 0
    for i in word:
        if (i.isupper()):
            capital_letter += 1
        elif (i.islower()):
            small_letter += 1

    if (small_letter >= capital_letter):
        print(word.lower())
    else:
        print(word.upper())


if __name__ == "__main__":
    checkCase(input_word)
