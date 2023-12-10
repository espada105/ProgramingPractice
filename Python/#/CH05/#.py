# a = int(input("횟수입력: "))

# print("아니 이게 맞나\n"*a)


# a = int(input("원소개수입력: "))

# b = []
# for i in range(a):
#     b.append(f'{i}번째')

# print(b)

# name = input('입력하세요: ').split()

# namedict = {key: input() for key in name}
# print(namedict)


# a = input("공백을 기준으로 이름 입력: ").split()

# b = []
# for i in range(len(a)):
#     b.append(input(f'{a[i]}의 거주지를 입력하세요'))

# result = dict(zip(a,b))
# print(result)


# a = list(map(int,input("점수를 입력하시오(공백기준): ").split()))

# avg=sum(a)/len(a)
# print(avg)

# a =map(int,input("원소개수를 입력하시오").split())

# print


# morse_code_dict = { 'A': '.-', 'B': '-...', 'C': '-.-.', 'D': '-..', 'E': '.', 'F': '..-.', 'G': '--.', 'H': '....',
# 'I': '..', 'J': '.---', 'K': '-.-', 'L': '.-..', 'M': '--',
# 'N': '-.', 'O': '---', 'P': '.--.', 'Q': '--.-', 'R': '.-.', 'S': '...', 'T': '-', 'U': '..-', 'V': '...-', 'W': '.--',
# 'X': '-..-', 'Y': '-.--', 'Z': '--..' }

# a = input("영문을 공백기준으로 입력: ").split()

# for i in range(len(a)):
#     if 


class Me:
    def __init__(self, a, b):
        self.a = a
        self.b = b
    
    def add1(self):
        return self.a + self.b
    
    def add2(self, q, w, e):
        self.q = q
        self.w = w
        self.e = e
        return self.q + self.w + self.e

# 객체 생성
a = Me(1, 2)

# add1 메서드 호출
result = a.add1()

# add2 메서드 호출
result2 = a.add2(1, 2, 3)

print(result)
print(result2)
