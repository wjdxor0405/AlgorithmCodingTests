def solution(food):
    answer = ''
    food = [f//2 for f in food]
    for i in range(len(food)):
        if food[i] > 0:
            answer += str(i)*food[i]
    answer += '0'
    for i in range(len(food)-1,0,-1):
        if food[i] > 0:
            answer += str(i)*food[i]

    return answer