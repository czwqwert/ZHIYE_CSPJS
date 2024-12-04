#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

// ģ���ڴ��еķ���洢
vector<pair<string, string>> memory(100);

// ģ���ⲿ�洢�еķ���ʵ�
unordered_map<string, string> externalDictionary = {
    {"hello", "���"},
    {"world", "����"},
    {"happy", "����"},
    {"blue","��ɫ"},
    {"red","��ɫ"},
    {"green","��ɫ"},
    {"school","ѧУ"},
    {"book","��"},
    {"class","�༶"},
    {"pen","�ֱ�"},
    {"paper","ֽ"},
    {"pencil","Ǧ��"},
    {"one","һ"},
    {"two","��"},
    {"three","��"},
    {"four","��"},
    {"five","��"},
    {"six","��"},
    {"seven","��"},
    {"eight","��"},
    {"nine","��"},
    {"ten","ʮ"},
   

    // ������Ӹ��൥��
};

// ����ڴ����Ƿ��з���
bool hasInMemory(const string& word) {
    for (const auto& pair : memory) {
        if (pair.first == word) {
            return true;
        }
    }
    return false;
}

// ��ӵ��ڴ���
void addToMemory(const string& word, const string& translation) {
    memory.push_back({ word, translation });
}

// ��ȡ����
string getTranslation(const string& word) {
    if (hasInMemory(word)) {
        for (const auto& pair : memory) {
            if (pair.first == word) {
                return pair.second;
            }
        }
    }
    else if (externalDictionary.find(word) != externalDictionary.end()) {
        string translation = externalDictionary[word];
        addToMemory(word, translation);
        return translation;
    }
    return "Unknown"; // ����Ҳ������룬����"Unknown"
}

int main() {
    string word;
    while (cin >> word) {
        cout << getTranslation(word) << endl;
    }
    return 0;
}