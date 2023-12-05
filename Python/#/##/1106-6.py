#이름을 한 번에 입력 받기

print('이름을 입력하시오:',end = '')
namelist = input().split(',')

print('원소개수를 입력하시오:',end='')
a=int(input())
for i in range(1,a+1):
    print('이름을 입력하세요 %s'%namelist[i])