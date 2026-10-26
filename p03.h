#ifndef P03_H
#define P03_H

#define MAX 100
#define PRICE_BW 1.0     // 1 nghìn đồng / tờ
#define PRICE_COLOR 3.0  // 3 nghìn đồng / tờ

// --- Nhiệm vụ 1 (Thành viên 1) ---
int validateId(const char *id);
void addJob(char ids[][10], char names[][51], int pages[], int copies[], int printTypes[], double finalPrices[], int *n);
void printList(const char ids[][10], const char names[][51], const int pages[], const int copies[], const int printTypes[], const double finalPrices[], int n);
void editJob(char ids[][10], char names[][51], int pages[], int copies[], int printTypes[], double finalPrices[], int n);

// --- Nhiệm vụ 2 (Nhóm trưởng - Bạn) ---
int calcTotalSheets(int page, int copy);
double calcDiscountRate(int totalSheets);
double calcFinalPrice(int page, int copy, int printType);

// --- Nhiệm vụ 3 (Thành viên 3) ---
void compareBudget(const char ids[][10], const int pages[], const int copies[], int n);

// --- Nhiệm vụ 4 (Thành viên 4) ---
int findJobIndex(const char ids[][10], int n, const char *targetId);
void deleteJob(char ids[][10], char names[][51], int pages[], int copies[], int printTypes[], double finalPrices[], int *n);
void sortByFinalPrice(char ids[][10], char names[][51], int pages[], int copies[], int printTypes[], double finalPrices[], int n);
void statisticByType(const int printTypes[], const double finalPrices[], int n);

// Nạp dữ liệu mẫu
void loadSampleData(char ids[][10], char names[][51], int pages[], int copies[], int printTypes[], double finalPrices[], int *n);

#endif