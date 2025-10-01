#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LEN 1024

// 凯撒加密：处理字符串（小写转大写，非字母删除）
void caesarEncryptStr(char* plaintext, int k, char* ciphertext) {
    int idx = 0;
    for (int i = 0; plaintext[i] != '\0'; i++) {
        if (islower(plaintext[i])) {
            char c = plaintext[i] - 32; // 小写转大写
            ciphertext[idx] = (c - 'A' + k) % 26 + 'A';
            idx++;
        }
        else if (isupper(plaintext[i])) {
            ciphertext[idx] = (plaintext[i] - 'A' + k) % 26 + 'A';
            idx++;
        }
        // 非字母字符直接跳过
    }
    ciphertext[idx] = '\0';
}

// 凯撒解密：处理字符串
void caesarDecryptStr(char* ciphertext, int k, char* plaintext) {
    int idx = 0;
    for (int i = 0; ciphertext[i] != '\0'; i++) {
        if (isupper(ciphertext[i])) {
            plaintext[idx] = (ciphertext[i] - 'A' - k + 26) % 26 + 'A';
            idx++;
        }
    }
    plaintext[idx] = '\0';
}

// 从文件读取内容到字符串
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

// 将字符串写入文件
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
    int k = 3;

    // 从文件读取明文
    if (readFromFile("plaintext.txt", plainBuffer)) {
        printf("读取的明文：%s\n", plainBuffer);

        // 加密并写入文件
        caesarEncryptStr(plainBuffer, k, cipherBuffer);
        printf("加密后内容：%s\n", cipherBuffer);
        writeToFile("ciphertext.txt", cipherBuffer);

        // 从文件读取密文并解密
        if (readFromFile("ciphertext.txt", cipherBuffer)) {
            caesarDecryptStr(cipherBuffer, k, decryptedBuffer);
            printf("解密后内容：%s\n", decryptedBuffer);
            writeToFile("decrypted.txt", decryptedBuffer);
        }
    }

    return 0;
}