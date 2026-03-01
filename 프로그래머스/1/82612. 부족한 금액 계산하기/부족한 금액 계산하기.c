#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int price, int money, int count) {
    long long c = (1+count)*count/2;
    long long a = c*price;
    if(a>money)return a - money;
    return 0;
}