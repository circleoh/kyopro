#https://www.acmicpc.net/problem/8320

num = int(input())

def numPrimeSquare(num):
    counter = 1;
    for i in range(2, int(num ** 0.5) + 1):
        if num % i == 0:
            counter += 1;
    return counter;

counter = 0;
for i in range(1, num+1):
    counter += numPrimeSquare(i);

print(counter);