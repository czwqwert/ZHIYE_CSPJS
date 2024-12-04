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
    }    std::cout << "请输入算术表达式（例如 12 + 3）: ";
    std::getline(std::cin, expression);

    std::istringstream iss(expression);
    int num1, num2 = 0;
    char operator = +;

    // 解析表达式
    iss >> num1 >> operator >> num2;

    // 根据运算符进行计算
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
            std::cout << "错误：除数不能为0。" << std::endl;
        }
        break;
    case '%':
        if (num2 != 0) {
            std::cout << num1 << " % " << num2 << " = " << (num1 % num2) << std::endl;
        }
        else {
            std::cout << "错误：除数不能为0。" << std::endl;
        }
        break;
    default:
        std::cout << "错误：无效的运算符。" << std::endl;
        break;
    }

    return 0;
}