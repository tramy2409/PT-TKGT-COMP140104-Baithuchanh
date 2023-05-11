#include <iostream>
#include <algorithm>
using namespace std;

// Cấu trúc lưu thông tin về công việc
struct CV {
    int id;
    int deadline;
    int pr;
};

// Hàm so sánh hai công việc theo thời gian hoàn thành
bool compare(CV a, CV b) {
    return a.deadline < b.deadline;
}

// Hàm giải quyết bài toán lập lịch công việc
void XepLich(CV arr[], int n) {
    // Sắp xếp các công việc theo thời gian hoàn thành
    sort(arr, arr+n, compare);

    int maxDeadline = arr[n-1].deadline;
    int result[maxDeadline] = {0}; // Mảng lưu trữ kết quả

    for (int i = 0; i < n; i++) {
        // Tìm vị trí trống trong lịch trình để xếp công việc
        for (int j = arr[i].deadline-1; j >= 0; j--) {
            if (result[j] == 0) {
                result[j] = arr[i].pr;
                break;
            }
        }
    }

    int totalPr = 0;
    for (int i = 0; i < maxDeadline; i++) {
        totalPr += result[i];
    }

    cout << "Tong: " << totalPr << endl;
}

int main() {
    // Khởi tạo mảng công việc
    CV arr[] = { {1, 2, 60}, {2, 1, 100}, {3, 3, 20}, {4, 2, 40} };
    int n = sizeof(arr) / sizeof(arr[0]);

    // Gọi hàm giải quyết bài toán lập lịch công việc
    XepLich(arr, n);

    return 0;
}
