//
// Created by summer on 2019-08-26.
//

#include <math.h>
#include <iostream>

int reverse(int x);

int reverse(int x) {
    long r = 0;
    while (x) {
        // C++ 支持负数取余，和python的负数取余逻辑不一样
        r = r*10 + x%10;
        x /= 10;
    }
    // 检测overflow
    // 如果`r`超过int的范围，则int(r) = 0, 因此`(int(r) == r)` = 0
    return (int(r) == r) * r;
}

int main() {
    long r = -321;
    std::cout << reverse(-321) << '\n';
    std::cout << r % 10;
}
