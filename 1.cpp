//
// Created by xk on 2019/8/25.
//

#include <iostream>
#include <vector>
#include <unordered_map>

using std::vector;
using std::unordered_map;


vector<int> twoSum(vector<int> &numbers, int target) {
    unordered_map<int, int> hash;
    for (int i = 0; i < numbers.size(); i++) {
        int numtofind = target - numbers[i];
        if (hash.find(numtofind) != hash.end()) {
            return {hash[numtofind], i};
        }
        hash[numbers[i]] = i;
    }
    return {};
}

int main() {
    vector<int> numbers = {2, 7, 10, 12};
    int target = 9;
    vector<int> result = twoSum(numbers, target);
    for (auto item: result)
        std::cout << item << std::endl;
}