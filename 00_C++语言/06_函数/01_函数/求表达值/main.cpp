#include <iostream>
#include <string>
#include <sstream>

int main() {
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
    }    std::cout << "�������������ʽ������ 12 + 3��: ";
    std::getline(std::cin, expression);

    std::istringstream iss(expression);
    int num1, num2 = 0;
    char operator = +;

    // �������ʽ
    iss >> num1 >> operator >> num2;

    // ������������м���
    switch (operator) {
    case '+':
        std::cout << num1 << " + " << num2 << " = " << (num1 + num2) << std::endl;
        break;
    case '-':
        std::cout << num1 << " - " << num2 << " = " << (num1 - num2) << std::endl;
        break;
    case '*':
        std::cout << num1 << " * " << num2 << " = " << (num1 * num2) << std::endl;
        break;
    case '/':
        if (num2 != 0) {
            std::cout << num1 << " / " << num2 << " = " << (num1 / num2) << std::endl;
        }
        else {
            std::cout << "���󣺳�������Ϊ0��" << std::endl;
        }
        break;
    case '%':
        if (num2 != 0) {
            std::cout << num1 << " % " << num2 << " = " << (num1 % num2) << std::endl;
        }
        else {
            std::cout << "���󣺳�������Ϊ0��" << std::endl;
        }
        break;
    default:
        std::cout << "������Ч���������" << std::endl;
        break;
    }

    return 0;
}