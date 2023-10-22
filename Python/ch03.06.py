numbers = [1,2,3,4,5]
sum = []
# for i in numbers:    
#     if i%2==1:
#         sum.append(i*2)


result = [n*2 for n in numbers if n%2==1]

print(result)