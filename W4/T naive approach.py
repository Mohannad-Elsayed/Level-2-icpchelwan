import sys
sys.set_int_max_str_digits(100100)
w = int(input())
w %= 4
w += 1
s = 1 + 2**w + 3**w + 4**w
s %= 5
print(s)