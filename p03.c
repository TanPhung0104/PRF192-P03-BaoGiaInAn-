#include <stdio.h>
#include "p03.h"

// Nhiệm vụ 1: Số tờ = số trang * số bản
int calcTotalSheets(int page, int copy) {
    return page * copy;
}

// Nhiệm vụ 2: Tỷ lệ chiết khấu
// < 100: 0% | 100-499: 5% | >= 500: 10%
double calcDiscountRate(int totalSheets) {
    if (totalSheets < 100) return 0.0;
    if (totalSheets <= 499) return 0.05;
    return 0.10;
}

// Tính giá cuối cùng (nghìn đồng)
double calcFinalPrice(int page, int copy, int printType) {
    int sheets = calcTotalSheets(page, copy);
    double unitPrice = (printType == 0) ? PRICE_BW : PRICE_COLOR;
    double rawTotal = sheets * unitPrice;
    double discount = calcDiscountRate(sheets);
    return rawTotal * (1.0 - discount);
}