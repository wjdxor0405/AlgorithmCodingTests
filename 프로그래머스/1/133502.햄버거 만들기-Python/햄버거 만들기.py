def solution(ingredient):
    answer = 0
    ingredient = "".join(map(str,ingredient))
    i = 4
    while i <= len(ingredient):

        if ingredient[i-4:i] == "1231":
            ingredient = ingredient[:i-4] + ingredient[i:]
            answer += 1
            i -= 5
        i+=1

    return answer