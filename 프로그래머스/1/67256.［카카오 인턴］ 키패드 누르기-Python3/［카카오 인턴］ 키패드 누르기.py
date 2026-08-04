# 이전 실수 ---
# 1. distance계산 - 첫번째 coordinate복사하다가 두번째 coordiate잘못됨.
# 2. '0'위치 x,y축 반대로 적음.
# 3. '*', '#' 위치 x,y축 반대로 적음.
# 4. 발견해 놓고 하나만 바꿈.
# 실수 원인 : 행/열 과 x,y 축은 반대?임.

class Pos:
    def __init__(self, m, num = True):
        if num:
            self.a, self.b = [(3,1),(0,0),(0,1),(0,2),(1,0),(1,1),(1,2),(2,0),(2,1),(2,2)][m]
        elif m == '*':
            self.a, self.b = 3,0
        elif m == '#':
            self.a, self.b = 3,2

    def n(self):
        return self.a, self.b


def dist(pos1, pos2):
    return abs(pos1.a - pos2.a) + abs(pos1.b - pos2.b)

def solution(numbers, hand):
    answer = ''
    left_pos = Pos('*', False)
    right_pos = Pos('#', False)

    for n in numbers:

        if n in [1,4,7]:
            
            left_pos = Pos(n)
            answer += 'L'
            
        elif n in [3,6,9]:
            
            right_pos = Pos(n)
            answer += 'R'
            
        else:
            l_dist = dist(Pos(n), left_pos)
            r_dist = dist(Pos(n), right_pos)

            if l_dist < r_dist:
                left_pos = Pos(n)
                answer += 'L'
            elif l_dist > r_dist:
                right_pos = Pos(n)
                answer += 'R'
            elif hand == "left":
                left_pos = Pos(n)
                answer += 'L'
            elif hand == "right":
                right_pos = Pos(n)
                answer += 'R'

    return answer