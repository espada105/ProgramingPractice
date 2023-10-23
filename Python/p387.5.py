n = int(input())
a = [0, 1]  # 초기 두 개의 피보나치 숫자

for i in range(2, n):
    next_fib = a[i-1] + a[i-2]
    a.append(next_fib)

print(a)
