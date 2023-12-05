#원소개수를 입력받고 미리 원소개수를 정하고 원소넣기

print('원소 개수를 입력하세요:', end=' ')
n = int(input())

my_list = []

for i in range(n):
    element = input(f'{i+1}번째 원소를 입력하세요: ')
    my_list.append(element)

print('입력한 원소:', my_list)

