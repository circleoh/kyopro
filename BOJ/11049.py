#https://www.acmicpc.net/problem/11049

num = int(input())

for i in range(num) :
    string = input()
    if string[:10] == "Simon says" :
        print(string[10:])