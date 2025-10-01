#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LEN 1024

// �������ܣ������ַ�����Сдת��д������ĸɾ����
void caesarEncryptStr(char* plaintext, int k, char* ciphertext) {
    int idx = 0;
    for (int i = 0; plaintext[i] != '\0'; i++) {
        if (islower(plaintext[i])) {
            char c = plaintext[i] - 32; // Сдת��д
            ciphertext[idx] = (c - 'A' + k) % 26 + 'A';
            idx++;
        }
        else if (isupper(plaintext[i])) {
            ciphertext[idx] = (plaintext[i] - 'A' + k) % 26 + 'A';
            idx++;
        }
        // ����ĸ�ַ�ֱ������
    }
    ciphertext[idx] = '\0';
}

// �������ܣ������ַ���
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

// ���ļ���ȡ���ݵ��ַ���
int readFromFile(const char* filename, char* buffer) {
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        printf("�����޷����ļ� %s\n", filename);
        return 0;
    }
    fgets(buffer, MAX_LEN, file);
    fclose(file);
    return 1;
}

// ���ַ���д���ļ�
int writeToFile(const char* filename, char* content) {
    FILE* file = fopen(filename, "w");
    if (file == NULL) {
        printf("�����޷������ļ� %s\n", filename);
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

    // ���ļ���ȡ����
    if (readFromFile("plaintext.txt", plainBuffer)) {
        printf("��ȡ�����ģ�%s\n", plainBuffer);

        // ���ܲ�д���ļ�
        caesarEncryptStr(plainBuffer, k, cipherBuffer);
        printf("���ܺ����ݣ�%s\n", cipherBuffer);
        writeToFile("ciphertext.txt", cipherBuffer);

        // ���ļ���ȡ���Ĳ�����
        if (readFromFile("ciphertext.txt", cipherBuffer)) {
            caesarDecryptStr(cipherBuffer, k, decryptedBuffer);
            printf("���ܺ����ݣ�%s\n", decryptedBuffer);
            writeToFile("decrypted.txt", decryptedBuffer);
        }
    }

    return 0;
}