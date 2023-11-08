#파일열기
f = open("/Users/hongseong-in/Documents/GitHub/Major_Study/Python/example.txt",'r')


#파일쓰기

while True:
    line = f.readline()
    if not line: break
    print(line)

#파일닫기
f.close()