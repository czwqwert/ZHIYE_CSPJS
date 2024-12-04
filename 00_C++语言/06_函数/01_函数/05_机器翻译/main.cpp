#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

// 模拟内存中的翻译存储
vector<pair<string, string>> memory(100);

// 模拟外部存储中的翻译词典
unordered_map<string, string> externalDictionary = {
    {"hello", "你好"},
    {"world", "世界"},
    {"happy", "开心"},
    {"blue","蓝色"},
    {"red","红色"},
    {"green","绿色"},
    {"school","学校"},
    {"book","书"},
    {"class","班级"},
    {"pen","钢笔"},
    {"paper","纸"},
    {"pencil","铅笔"},
    {"one","一"},
    {"two","二"},
    {"three","三"},
    {"four","四"},
    {"five","五"},
    {"six","六"},
    {"seven","七"},
    {"eight","八"},
    {"nine","九"},
    {"ten","十"},
   

    // 可以添加更多单词
};

// 检查内存中是否有翻译
bool hasInMemory(const string& word) {
    for (const auto& pair : memory) {
        if (pair.first == word) {
            return true;
        }
    }
    return false;
}

// 添加到内存中
void addToMemory(const string& word, const string& translation) {
    memory.push_back({ word, translation });
}

// 获取翻译
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
    return "Unknown"; // 如果找不到翻译，返回"Unknown"
}

int main() {
    string word;
    while (cin >> word) {
        cout << getTranslation(word) << endl;
    }
    return 0;
}