import random
a = random.sample(range(5), 5)

lista = ['김승현','김진호','강춘자','이예준','김현주']
listb = ['청소','빨래','설거지','휴식','휴식']

for i in a:
    print(listb[i]+'는'+lista[i])
