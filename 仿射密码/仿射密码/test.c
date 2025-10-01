#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LEN 1024

int modInverse(int a, int m) {
    for (int x = 1; x < m; x++) {
        if ((a * x) % m == 1) {
            return x;
        }
    }
    return -1;
}

void affineEncryptStr(char* plaintext, int k1, int k2, char* ciphertext) {
    int idx = 0;
    for (int i = 0; plaintext[i] != '\0'; i++) {
        if (islower(plaintext[i])) {
            char c = plaintext[i] - 32;
            int p = c - 'A';
            int ciph = (k1 * p + k2) % 26;
            ciphertext[idx] = ciph + 'A';
            idx++;
        }
        else if (isupper(plaintext[i])) {
            int p = plaintext[i] - 'A';
            int ciph = (k1 * p + k2) % 26;
            ciphertext[idx] = ciph + 'A';
            idx++;
        }
    }
    ciphertext[idx] = '\0';
}

void affineDecryptStr(char* ciphertext, int k1, int k2, char* plaintext) {
    int k1Inv = modInverse(k1, 26);
    if (k1Inv == -1) {
        printf("错误：k1与26不互质！\n");
        return;
    }
    int idx = 0;
    for (int i = 0; ciphertext[i] != '\0'; i++) {
        if (isupper(ciphertext[i])) {
            int c = ciphertext[i] - 'A';
            int p = (k1Inv * (c - k2 + 26)) % 26;
            plaintext[idx] = p + 'A';
            idx++;
        }
    }
    plaintext[idx] = '\0';
}

int readFromFile(const char* filename, char* buffer) {
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        printf("错误：无法打开文件 %s\n", filename);
        return 0;
    }
    fgets(buffer, MAX_LEN, file);
    fclose(file);
    return 1;
}

int writeToFile(const char* filename, char* content) {
    FILE* file = fopen(filename, "w");
    if (file == NULL) {
        printf("错误：无法创建文件 %s\n", filename);
        return 0;
    }
    fprintf(file, "%s", content);
    fclose(file);
    return 1;
}

int main() {
    char plainBuffer[MAX_LEN] = { 0 };
    char cipherBuffer[MAX_LEN] = { 0 };
    char decryptedBuffer[MAX_LEN] = { 0 };
    int k1 = 5, k2 = 8;

    if (readFromFile("plaintext.txt", plainBuffer)) {
        printf("读取的明文：%s\n", plainBuffer);

        affineEncryptStr(plainBuffer, k1, k2, cipherBuffer);
        printf("加密后内容：%s\n", cipherBuffer);
        writeToFile("ciphertext.txt", cipherBuffer);

        if (readFromFile("ciphertext.txt", cipherBuffer)) {
            affineDecryptStr(cipherBuffer, k1, k2, decryptedBuffer);
            printf("解密后内容：%s\n", decryptedBuffer);
            writeToFile("decrypted.txt", decryptedBuffer);
        }
    }

    return 0;
}