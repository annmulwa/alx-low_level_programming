#!/usr/bin/python3

biggest_palindrome = 0

for n in range(100, 1000):
    for m in range(100, 1000):
        mul = n * m
        if str(mul) == str(mul)[::-1] and mul > biggest_palindrome:
            biggest_palindrome = mul

with open("102-result", "w") as file:
    file.write(str(biggest_palindrome))
