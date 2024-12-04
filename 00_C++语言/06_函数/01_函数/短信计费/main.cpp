#include <iostream>
#include <iomanip>
#include <vector>

int main() {
    int n, length;
    std::vector<int> lengths;
    std::cout << "请输入短信的总次数: ";
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        std::cin >> length;
        lengths.push_back(length);
    }

    double totalCost = 0.0;
    for (int length : lengths) {
        // 每70个字算一条短信，不足70个字也按一条短信计算
        totalCost += (length + 69) / 70;
    }

    std::cout << std::fixed << std::setprecision(1) << totalCost * 0.1 << std::endl;

    return 0;
}