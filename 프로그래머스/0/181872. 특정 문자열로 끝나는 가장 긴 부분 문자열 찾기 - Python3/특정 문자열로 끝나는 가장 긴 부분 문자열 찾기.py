def solution(myString, pat):
    for i in range(len(myString)):
        if myString[:i+1].endswith(pat):
            answer = myString[:i+1]

    return answer
