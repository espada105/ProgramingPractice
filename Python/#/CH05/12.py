# import random

# result = []
# while len(result) < 6:
#     num = random.randint(1,45)
#     if num not in result:
#         result.append(num)

# print(result)        


# import random

# result = random.sample(range(1, 46), 6)

# print(result)

import random
result = []
while (len(result)<6):
    num = random.randint(1,45)
    if num not in result:
        result.append(num)
print(result)