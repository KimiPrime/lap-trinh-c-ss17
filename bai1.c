#include <stdio.h>

void inputArr(int *ptr, int *n);
void printArr(int *ptr, int n);
void lengthArr(int n);
void sumArr(int *ptr, int n);
void maxArr(int *ptr, int n);

int main() {
    int type, check = 0, arr[100], n;
    do {
        printf("\n\tMENU\n");
        printf("\n1. Nhap vao so phan tu va tung phan tu\n2. Hien thi cac phan tu trong mang\n3. Tinh do dai mang\n4. Tinh tong cac phan tu trong mang\n5. Hien thi phan tu lon nhat\n6. Thoat\nLua chon cua ban: ");
        scanf("%d", &type);
        switch (type) {
        case 1:
            inputArr(arr, &n);
            check = 1;
            break;
        case 2:
            if (check) {
                printArr(arr, n);
            } else {
                printf("Mang chua duoc khoi tao!\n");
            }
            break;
        case 3:
            if (check) {
                lengthArr(n);
            } else {
                printf("Mang chua duoc khoi tao!\n");
            }
            break;
        case 4:
            if (check) {
                sumArr(arr, n);
            } else {
                printf("Mang chua duoc khoi tao!\n");
            }
            break;
        case 5:
            if (check) {
                maxArr(arr, n);
            } else {
                printf("Mang chua duoc khoi tao!\n");
            }
            break;
        case 6:
            printf("Thoat chuong trinh.\n");
            break;
        default:
            printf("Lua chon khong hop le!\n");
        }
    } while (type != 6);
    return 0;
}

void inputArr(int *ptr, int *n) {
    printf("Vui long nhap do dai cua mang: ");
    scanf("%d", n);
    int i = 0;
    while (i < *n) {
        printf("Nhap gia tri tai vi tri [%d]: ", i);
        scanf("%d", (ptr + i));
        i++;
    }
}

void printArr(int *ptr, int n) {
    int i = 0;
    printf("Cac phan tu trong mang: ");
    while (i < n) {
        printf("[%d]", *(ptr + i));
        i++;
    }
    printf("\n");
}

void lengthArr(int n) {
    printf("Do dai cua mang la %d\n", n);
}

void sumArr(int *ptr, int n) {
    int sum = 0, i = 0;
    while (i < n) {
        sum += *(ptr + i);
        i++;
    }
    printf("Tong cac phan tu trong mang la %d\n", sum);
}

void maxArr(int *ptr, int n) {
    int i = 0, max = *ptr;
    while (i < n) {
        if (max < *(ptr + i)) {
            max = *(ptr + i);
        }
        i++;
    }
    printf("So lon nhat la %d\n", max);
}
