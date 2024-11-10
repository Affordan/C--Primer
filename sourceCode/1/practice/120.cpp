/***************
 * 文件名: 1.16.cpp
 * 作者: Xiuqiang Wang
 * 日期: 11.11 2024
 * 描述: 读取一组书籍销售记录，将每条记录打印到标准输出上。
 ***************/

// program to read a set of book sales records from cin
// and print each record to the standard output

#include "../Sales_item.h"
#include <iostream>

int main()
{
    Sales_item item;
    while(std::cin>>item)
    {
      std::cout << item << std::endl;
    }
    return 0;
}