#include <stdio.h>

void inputString(char *str);
void printReversedString(char *str);
void countWords(char *str);
void compareStrings(char *str);
void toUpperCase(char *str);
void concatenateStrings(char *str);

int main() {
    int type;
    char str[100];
    int check = 0;
    do {
        printf("\n\tMENU\n");
        printf("\n1. Nhap vao chuoi\n2. In ra chuoi dao nguoc\n3. Dem so luong tu trong chuoi\n4. Nhap vao chuoi khac, so sanh chuoi do voi chuoi ban dau\n5. In hoa tat ca chu cai trong chuoi\n6. Nhap vao chuoi khac va them chuoi do vao chuoi ban dau\n7. Thoat\nLua chon cua ban: ");
        scanf("%d", &type);
        getchar(); 
        switch (type) {
        case 1:
            inputString(str);
            check = 1;
            break;
        case 2:
            if (check) {
                printReversedString(str);
            } else {
                printf("Chuoi chua duoc nhap!\n");
            }
            break;
        case 3:
            if (check) {
                countWords(str);
            } else {
                printf("Chuoi chua duoc nhap!\n");
            }
            break;
        case 4:
            if (check) {
                compareStrings(str);
            } else {
                printf("Chuoi chua duoc nhap!\n");
            }
            break;
        case 5:
            if (check) {
                toUpperCase(str);
            } else {
                printf("Chuoi chua duoc nhap!\n");
            }
            break;
        case 6:
            if (check) {
                concatenateStrings(str);
            } else {
                printf("Chuoi chua duoc nhap!\n");
            }
            break;
        case 7:
            printf("Thoat chuong trinh.\n");
            break;
        default:
            printf("Lua chon khong hop le!\n");
        }
    } while (type != 7);
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

void printReversedString(char *str) {
    char *end = str;
    while (*end != '\0') {
        end++;
    }
    printf("Chuoi dao nguoc: ");
    while (--end >= str) {
        putchar(*end);
    }
    printf("\n");
}

void countWords(char *str) {
    int count = 0;
    char *ptr = str;
    int inWord = 0;
    while (*ptr != '\0') {
        if (*ptr != ' ' && !inWord) {
            inWord = 1;
            count++;
        } else if (*ptr == ' ') {
            inWord = 0;
        }
        ptr++;
    }
    printf("So luong tu trong chuoi: %d\n", count);
}

void compareStrings(char *str) {
    char otherStr[100];
    printf("Nhap chuoi khac: ");
    inputString(otherStr);
    char *ptr1 = str, *ptr2 = otherStr;
    while (*ptr1 != '\0' && *ptr2 != '\0') {
        ptr1++;
        ptr2++;
    }
    if (*ptr1 == '\0' && *ptr2 == '\0') {
        printf("Hai chuoi co do dai bang nhau.\n");
    } else if (*ptr1 == '\0') {
        printf("Chuoi ban dau ngan hon chuoi moi.\n");
    } else {
        printf("Chuoi ban dau dai hon chuoi moi.\n");
    }
}

void toUpperCase(char *str) {
    char *ptr = str;
    while (*ptr != '\0') {
        if (*ptr >= 'a' && *ptr <= 'z') {
            *ptr -= 32;
        }
        ptr++;
    }
    printf("Chuoi sau khi in hoa: %s\n", str);
}

void concatenateStrings(char *str) {
    char otherStr[100];
    printf("Nhap chuoi khac: ");
    inputString(otherStr);
    char *ptr = str;
    while (*ptr != '\0') {
        ptr++;
    }
    char *ptr2 = otherStr;
    while (*ptr2 != '\0' && (ptr - str) < 99) {
        *ptr = *ptr2;
        ptr++;
        ptr2++;
    }
    *ptr = '\0';
    printf("Chuoi sau khi noi: %s\n", str);
}
