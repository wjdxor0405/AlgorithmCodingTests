def solution(arr, query):
    i = 0
    for q in query:
        if i % 2 == 0:
            arr = arr[:q+1]
        else:
            arr = arr[q:]
        i += 1
        
    return arr