def solution(X, Y):
    answer = ''
    x_count = [0]*10
    y_count = [0]*10
    for x in X:
        x_count[int(x)] += 1
    for y in Y:
        y_count[int(y)] += 1
    
    for i in range(10):
        count = min(x_count[i], y_count[i])
        answer = str(i)*count + answer

    if len(answer) == 0:
        return '-1'
    elif answer[0] == '0':
        return '0'
        
    return answer