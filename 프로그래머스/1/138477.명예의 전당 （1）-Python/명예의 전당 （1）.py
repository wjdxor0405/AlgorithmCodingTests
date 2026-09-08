def solution(k, score):
    answer = []

    top_k = [-1]

    for j in range(len(score)):
        s = score[j]
        for i in range(len(top_k)):
            if top_k[i] < s:
                top_k = top_k[:i] + [s] + top_k[i:]
                answer.append(top_k[min(j, k-1)])
                break
    return answer