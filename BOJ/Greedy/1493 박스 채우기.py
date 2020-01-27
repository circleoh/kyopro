//https://www.acmicpc.net/problem/1493

ans = 0;
isPoss = 0  

def divide(L, W, H, cubeArr) :
	
	global ans
	global isPoss
	
	unit = 2
	lwh = [L, W, H]
	
	lwh.sort();
	p = 0

	
	while unit ** (p + 1) <= lwh[0] :
		p += 1
	
	while p >= 0 and cubeArr[p] == 0 :
		p -= 1
		
	if p < 0 :
		isPoss = 1;
		return;
	
	num = unit ** p
	m = min(lwh[2] // num, cubeArr[p]);
	cubeArr[p] -= m;
	ans += m;
	
	if lwh[2] - m * num != 0 :
		divide(num, num, lwh[2] - m * num, cubeArr);
	
	if lwh[0] - num != 0 :
		divide(lwh[0] - num, num, lwh[2], cubeArr);
		
	if lwh[1] - num != 0 :
		divide(lwh[0], lwh[1] - num, lwh[2], cubeArr);

def main() :

	input_lwh = list(map(int, input().split(' ')))
	num_type_cube = int(input()); # < 20
	cube_array = [0] * 20;
	
	for i in range(num_type_cube) :
		[size, num] = list(map(int, input().split(' ')))
		cube_array[size] = num;
		
	divide(input_lwh[0], input_lwh[1], input_lwh[2], cube_array);
	
	
	if isPoss :
		print("-1");
	else :
		print("{}".format(ans));
	
main();