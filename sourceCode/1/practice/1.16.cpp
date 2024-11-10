/***************
 * 文件名: 1.16.cpp
 * 作者: Xiuqiang Wang
 * 日期: 11.11 2024
 * 描述: 该程序从标准输入读取一组整数，并计算它们的和。
 ***************/

// program to calculate a set of integers from cin
// and print the sum of the set of integers

#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string line;
    int sum = 0;
    while (std::getline(std::cin, line)) {
        std::istringstream iss(line);
        int num;
        while (iss >> num) {
            sum += num;
        }
    }
    std::cout << "The sum of the integers is: " << sum << std::endl;
    return 0;
}