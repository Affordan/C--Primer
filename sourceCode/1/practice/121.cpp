/***************
 * 文件名: 121.cpp
 * 作者: Xiuqiang Wang
 * 日期: 11.11 2024
 * 描述: 计算相同销售记录的和
 ***************/

// ...existing code...

#include <iostream>
#include "../Sales_item.h"

int main() { Sales_item item;
  std::cin >> item;
  for (int i = 0; i < 10;++i)
    {
    item += item;
    }
    std::cout << item << std::endl;
}