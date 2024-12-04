#include <iostream>
#include <iomanip>
#include <vector>

int main() {
    int n, length;
    std::vector<int> lengths;
    std::cout << "��������ŵ��ܴ���: ";
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        std::cin >> length;
        lengths.push_back(length);
    }

    double totalCost = 0.0;
    for (int length : lengths) {
        // ÿ70������һ�����ţ�����70����Ҳ��һ�����ż���
        totalCost += (length + 69) / 70;
    }

    std::cout << std::fixed << std::setprecision(1) << totalCost * 0.1 << std::endl;

    return 0;
}