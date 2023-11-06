print("국어, 영어, 수학 성적을 차레대로 입력하시오(공백문자로 구분)",end='')

a,b,c=map(int,input().split())

avg = (a + b + c)/3

print(avg)