import sys

args = sys.argv[1:]

result = 0
for i in args:
    result += i
print(result)