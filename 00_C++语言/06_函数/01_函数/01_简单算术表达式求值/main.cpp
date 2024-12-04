#include <iostream>
#include <vector>
#include <string>

using namespace std;

// 定义病人结构体
struct Patient {
    string name;
    float temperature;
    int coughing;
};

// 判断是否为甲流病人
bool isInfluenza(const Patient& patient) {
    return patient.temperature > 37.5 && patient.coughing == 1;
}

int main() {
    int n;
    cin >> n; // 读取病人数量

    vector<Patient> patients(n); // 创建病人数组

    // 读取病人信息
    for (int i = 0; i < n; ++i) {
        cin >> patients[i].name >> patients[i].temperature >> patients[i].coughing;
    }

    // 输出甲流病人的姓名和数量
    int count = 0; // 甲流病人计数
    for (const auto& patient : patients) {
        if (isInfluenza(patient)) {
            cout << patient.name << endl;
            ++count;
        }
    }

    // 输出甲流病人数量
    cout << count << endl;

    return 0;
}