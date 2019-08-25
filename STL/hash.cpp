//
// Created by xk on 2019/8/25.
//

#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    using std::cout;
    using std::endl;
    using std::string;
    using std::unordered_map;

    unordered_map<string, int> unomap;
    unomap["weight"] = 10;
    unordered_map<string, int>::const_iterator got = unomap.find("weight");


}