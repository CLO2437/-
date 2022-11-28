"""9행 9열의 곱셈과 덧셈표 출력하기"""

def gugu(func):
    """9행 9열의 표를 출력"""
    for i in range(1, 10):
        for j in range(1, 10):
            print('{:3d}'.format(func(i, j)), end='')
        print()

n = int(input('곱셈[0]／덧셈[1]：'))

if n == 0:
    print('9행 9열의 곱셈 표')
    gugu(lambda x, y: x * y)
elif n == 1:
    print('9행 9열의 덧셈 표')
    gugu(lambda x, y: x + y)
