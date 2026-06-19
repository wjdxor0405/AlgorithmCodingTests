def solution(arr):
    answer = 0

    while True:

        arr_copy = [a for a in arr]
        for i in range(len(arr)):
            
            if arr[i] >= 50 and arr[i] % 2 == 0:
                arr[i] //= 2
            elif arr[i] < 50 and arr[i] % 2 == 1:
                arr[i] = 2*arr[i] + 1
            
        if arr == arr_copy:
            break
        answer += 1
        
    return answer