def solution(arr):
    i = 0
    stk = []
    while i < len(arr):
        if stk == []:
            stk.append(arr[i])
            i += 1
        elif stk[len(stk)-1] < arr[i]:
            stk.append(arr[i])
            i += 1
        elif stk[len(stk)-1] >= arr[i]:
            stk = stk[:-1]

    return stk