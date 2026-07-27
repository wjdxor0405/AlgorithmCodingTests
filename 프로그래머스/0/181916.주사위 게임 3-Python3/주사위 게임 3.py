def solution(a, b, c, d):
    arr = [[0,0],[1,0],[2,0],[3,0],[4,0],[5,0],[6,0]]
    for t in [a,b,c,d]:
        arr[t][1] += 1

    lst = list(filter(lambda x:x[1]>0, arr))
    lst.sort(key=lambda x:x[1], reverse=True)

    answer = 0
    if lst[0][1] == 4:
        answer = 1111*lst[0][0]
    elif lst[0][1] == 3:
        answer = (10*lst[0][0] + lst[1][0])**2
    elif lst[0][1] == 2:
        if lst[1][1] == 2:
            answer = (lst[0][0] + lst[1][0]) * abs(lst[0][0] - lst[1][0])
        elif lst[1][1] == 1:
            answer = lst[1][0] * lst[2][0]
    elif lst[0][1] == 1:
        answer = min(lst[0][0], lst[1][0],lst[2][0])
        
    return answer