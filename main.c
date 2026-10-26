#include <stdio.h>
#include "p03.h"

int main() {
    char ids[MAX][10];
    char names[MAX][51];
    int pages[MAX];
    int copies[MAX];
    int printTypes[MAX];
    double finalPrices[MAX];
    int count = 0;

    int choice;
    do {
        printf("\n=== QUAN LY BAO GIA IN AN CLB (PRF192) ===\n");
        printf("1. Khoi tao 10 ban ghi mau\n");
        printf("2. Them bao gia moi\n");
        printf("3. Hien thi danh sach bao gia\n");
        printf("4. Tim kiem bao gia theo ID\n");
        printf("5. Sua thong tin bao gia\n");
        printf("6. Xoa bao gia theo ID\n");
        printf("7. Sap xep theo gia cuoi tang dan\n");
        printf("8. So sanh phuong an voi Ngan sach\n");
        printf("9. Thong ke tong bao gia theo loai\n");
        printf("0. Thoat\n");
        printf("Moi chon (0-9): ");
        
        if (scanf("%d", &choice) != 1) {
            printf("Nhap sai! Vui long nhap so.\n");
            while (getchar() != '\n');
            continue;
        }

        switch (choice) {
            case 1: printf("Chuc nang dang hoan thien...\n"); break;
            case 2: printf("Chuc nang dang hoan thien...\n"); break;
            case 3: printf("Chuc nang dang hoan thien...\n"); break;
            case 4: printf("Chuc nang dang hoan thien...\n"); break;
            case 5: printf("Chuc nang dang hoan thien...\n"); break;
            case 6: printf("Chuc nang dang hoan thien...\n"); break;
            case 7: printf("Chuc nang dang hoan thien...\n"); break;
            case 8: printf("Chuc nang dang hoan thien...\n"); break;
            case 9: printf("Chuc nang dang hoan thien...\n"); break;
            case 0: printf("Tam biet!\n"); break;
            default: printf("Lua chon khong hop le!\n");
        }
    } while (choice != 0);

    return 0;
}