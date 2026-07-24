def solution(my_string, queries):

    for q in queries:
        if q[0] == 0:
            my_string = my_string[:q[0]] + my_string[q[1]::-1] + my_string[q[1]+1:]
        else:
            my_string = my_string[:q[0]] + my_string[q[1]:q[0]-1:-1] + my_string[q[1]+1:]

    return my_string