# 점수를 입력받아 총점과 평균 구하기 1

print('총점과 평균을 구해봅시다.')
number = int(input('학생 수：'))

score = [None] * number

for i in range(number):
    score[i] = int(input('{}번 학생의 점수：'.format(i + 1)))

total = 0
for i in range(number):
    total += score[i]

print('총점은 {}점입니다.'.format(total))
print('평균은 {}점입니다.'.format(total / number))
