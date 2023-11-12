def mul(choice,*x):
    if choice=="add":
        result = 0
        for i in x:
            result+= i
    elif choice =="div":
        result = 0
        for i in x:
            result/= i
    elif choice =="mul":
        result = 0
        for i in x:
            result*= i
    print(result)
mul("add",1,2,3)
