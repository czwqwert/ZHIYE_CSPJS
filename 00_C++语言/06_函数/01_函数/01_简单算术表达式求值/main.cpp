#include <iostream>
#include <vector>
#include <string>

using namespace std;

// ���岡�˽ṹ��
struct Patient {
    string name;
    float temperature;
    int coughing;
};

// �ж��Ƿ�Ϊ��������
bool isInfluenza(const Patient& patient) {
    return patient.temperature > 37.5 && patient.coughing == 1;
}

int main() {
    int n;
    cin >> n; // ��ȡ��������

    vector<Patient> patients(n); // ������������

    // ��ȡ������Ϣ
    for (int i = 0; i < n; ++i) {
        cin >> patients[i].name >> patients[i].temperature >> patients[i].coughing;
    }

    // ����������˵�����������
    int count = 0; // �������˼���
    for (const auto& patient : patients) {
        if (isInfluenza(patient)) {
            cout << patient.name << endl;
            ++count;
        }
    }

    // ���������������
    cout << count << endl;

    return 0;
}