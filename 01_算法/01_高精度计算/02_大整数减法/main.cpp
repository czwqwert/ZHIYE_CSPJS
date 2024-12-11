#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// ��ת�ַ���
string reverseString(string str) {
    int n = str.length();
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
    return str;
}

// �߾��ȼ���
auto string�߾��ȼ���(string num1, string num2) {
    // ȷ��num1����num2
    if (num1.size() < num2.size() || (num1.size() == num2.size() && num1 < num2)) {
        swap(num1, num2);
    }

    // ��ת�����ַ���
    num1 = reverseString(num1);
    num2 = reverseString(num2);

    string result = "";
    int carry = 0;  // ��λ

    for (int i = 0; i < num2.size(); i++) {
        int sub = (num1[i] - '0') - (num2[i] - '0') - carry;
        if (sub < 0) {
            sub += 10;
            carry = 1;
        }
        else {
            carry = 0;
        }
        result += (sub + '0');
    }

    // ����ʣ���num1����
    for (int i = num2.size(); i < num1.size(); i++) {
        int sub = (num1[i] - '0') - carry;
        if (sub < 0) {
            sub += 10;
            carry = 1;
        }
        else {
            carry = 0;
        }
        result += (sub + '0');
    }

    // ȥ��ǰ��0
    size_t start = result.find_first_not_of('0');
    if (start != string::npos) {
        result = result.substr(start);
    }
    else {
        result = "0";  // ֻ�е����������ʱ�����Ϊ0
    }

    // ��ת������˳��
    return reverseString(result);
}

int main() {
    string num1, num2;
    cout << "�������һ����: ";
    cin >> num1;
    cout << "������ڶ�����: ";
    cin >> num2;

    string result = string�߾��ȼ���(num1, num2);
    cout << "���������: " << result << endl;

    return 0;
}