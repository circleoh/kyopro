#https://www.acmicpc.net/problem/10453

def AString(string: str):
	arr = []
	for i in range(len(string)):
		if string[i] == 'a':
			arr.append(i)
	
	return arr

def main(string1: str, string2: str):
	str1 = AString(string1); str2 = AString(string2);
	leng = len(str1)
	count = 0
	for i in range(leng):
		count += abs(str1[i] - str2[i])
	return count
	
def func():
	num = int(input())		
	for i in range(num):
		text = list(map(str, input().split()))
		print(main(text[0], text[1]))
	
func()