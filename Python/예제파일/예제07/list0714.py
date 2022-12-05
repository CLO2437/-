# 학생 수 없이 점수만 입력받아 최고점과 최저점 구하기 2(내장 함수 사용하기)

print('최고점과 최저점을 구해봅시다.')
print('"End"를 입력하면 종료됩니다.')

number = 0
score = []                  # 빈 리스트

while True:
    s = input('{}번 학생의 점수：'.format(number + 1))
    if s == 'End':
        break
    score.append(int(s))    # 마지막에 추가
    number += 1

minimum = min(score)
maximum = max(score)

print('최고점은 {}점입니다.'.format(maximum))
print('최저점은 {}점입니다.'.format(minimum))

