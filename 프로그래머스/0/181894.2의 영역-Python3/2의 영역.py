def solution(arr):
    answer = []
    for i in range(len(arr)):
        if arr[i] == 2:
            break
    for j in range(i,len(arr)):
        if arr[j] == 2:
            answer = arr[i:j+1]
    
    if answer == []:
        return [-1]
    return answer