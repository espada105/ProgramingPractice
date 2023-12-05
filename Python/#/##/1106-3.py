print('이름을 콤마로 구분하여 입력:', end="")
name_input = input()
name_list = name_input.split(',')

name_activity = {}

for name in name_list:
    print(f'{name}의 활동부대는?', end="")
    activity = input()
    name_activity[name] = activity

print('입력한 이름과 활동부대 딕셔너리:', name_activity)
