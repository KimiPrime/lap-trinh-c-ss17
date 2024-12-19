#include <stdio.h>

void inputString(char *str);
void printString(char *str);
void countLetters(char *str);
void countDigits(char *str);
void countSpecialChars(char *str);

int main() {
    int type;
    char str[100];
    int check = 0;
    do {
        printf("\n\tMENU\n");
        printf("\n1. Nhap vao chuoi\n2. In ra chuoi\n3. Dem so luong chu cai trong chuoi va in ra\n4. Dem so luong chu so trong chuoi va in ra\n5. Dem so luong ky tu dac biet trong chuoi va in ra\n6. Thoat\nLua chon cua ban: ");
        scanf("%d", &type);
        getchar(); 
        switch (type) {
        case 1:
            inputString(str);
            check = 1;
            break;
        case 2:
            if (check) {
                printString(str);
            } else {
                printf("Chuoi chua duoc nhap!\n");
            }
            break;
        case 3:
            if (check) {
                countLetters(str);
            } else {
                printf("Chuoi chua duoc nhap!\n");
            }
            break;
        case 4:
            if (check) {
                countDigits(str);
            } else {
                printf("Chuoi chua duoc nhap!\n");
            }
            break;
        case 5:
            if (check) {
                countSpecialChars(str);
            } else {
                printf("Chuoi chua duoc nhap!\n");
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

void inputString(char *str) {
    printf("Nhap chuoi: ");
    char *ptr = str;
    while ((*ptr = getchar()) != '\n' && ptr - str < 99) {
        ptr++;
    }
    *ptr = '\0';
}

void printString(char *str) {
    printf("Chuoi vua nhap: %s\n", str);
}

void countLetters(char *str) {
    int count = 0;
    char *ptr = str;
    while (*ptr != '\0') {
        if ((*ptr >= 'a' && *ptr <= 'z') || (*ptr >= 'A' && *ptr <= 'Z')) {
            count++;
        }
        ptr++;
    }
    printf("So luong chu cai trong chuoi: %d\n", count);
}

void countDigits(char *str) {
    int count = 0;
    char *ptr = str;
    while (*ptr != '\0') {
        if (*ptr >= '0' && *ptr <= '9') {
            count++;
        }
        ptr++;
    }
    printf("So luong chu so trong chuoi: %d\n", count);
}

void countSpecialChars(char *str) {
    int count = 0;
    char *ptr = str;
    while (*ptr != '\0') {
        if (!((*ptr >= 'a' && *ptr <= 'z') || (*ptr >= 'A' && *ptr <= 'Z') || (*ptr >= '0' && *ptr <= '9') || *ptr == ' ')) {
            count++;
        }
        ptr++;
    }
    printf("So luong ky tu dac biet trong chuoi: %d\n", count);
}

