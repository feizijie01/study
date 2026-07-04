#include <iostream>
int main() {
    int n = 999;  // 用一个特殊值初始化
    std::cout << "Enter a letter (not a number): ";
    std::cin >> n;  // 尝试读取字母
    std::cout << "After failed read, n = " << n << std::endl;
    return 0;
}