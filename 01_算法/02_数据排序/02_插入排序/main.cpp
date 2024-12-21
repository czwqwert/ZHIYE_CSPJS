#include <iostream>
using namespace std;

// 插入排序函数
void insertionSort(int arr[], int length) {
    for (int i = 1; i < length; i++) {
        int key = arr[i];
        int j = i - 1;

        // 将 arr[i] 插入到已排序序列 arr[0...i-1] 中的正确位置
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// 打印数组的函数
void printArray(int arr[], int length) {
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// 主函数
int main() {
    int arr[] = { 9, 5, 1, 4, 3 };
    int length = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, length);

    insertionSort(arr, length);

    cout << "Sorted array:   ";
    printArray(arr, length);

    return 0;
}