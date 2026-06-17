def solution(num_list):
    answer = 0
    l = len(num_list)
    while num_list != [1]*l:
        for i in range(l):
            if num_list[i] == 1:
                pass
            elif num_list[i] % 2 == 0:
                num_list[i] //=2
                answer +=1
            else:
                num_list[i] = (num_list[i]-1)//2
                answer +=1


    return answer