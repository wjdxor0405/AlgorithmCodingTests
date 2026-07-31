def solution(arr, queries):
    answer = []
    for q in queries:
        s,e,k = q
        min =  1000001
        for i in range(s, e+1):
            if k < arr[i]:
                if arr[i] < min:
                    min = arr[i]
        if min >1000000:
            min = -1
        answer.append(min)
    return answer