#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void read();

void write();

void copy();

void seek();

void encrypt();
void decrypt();

void encrypt2();
void decrypt2();

int main() {
//    write();
//    read();
//    copy();
//    seek();
//    encrypt();
//    decrypt();
//    encrypt2();
    decrypt2();
    return 0;
}

void decrypt2() {
    char  *password="123456";
    char *filePath = "D:\\workplace\\code\\GIT\\C\\C\\c6_io\\textEn222";
    char *fileEncryptDest = "D:\\workplace\\code\\GIT\\C\\C\\c6_io\\textDe222";

    FILE *file = fopen(filePath, "rb");
    FILE *fileEncode = fopen(fileEncryptDest, "wb");
    if (!file || !fileEncode) {
        printf("failed");
        exit(0);
    }

    int c;
    //使用密钥进行加密
    int index=0;
    int passlen=strlen(password);
    while ((c = fgetc(file)) != EOF) {
        char item =password[index++ % passlen];
        printf("encode item==%c",item);
        fputc(c ^ item, fileEncode);
    }

    fclose(fileEncode);
    fclose(file);
}
void encrypt2() {
    char  *password="123456";
    char *filePath = "D:\\workplace\\code\\GIT\\C\\C\\c6_io\\text";
    char *fileEncryptDest = "D:\\workplace\\code\\GIT\\C\\C\\c6_io\\textEn222";

    FILE *file = fopen(filePath, "rb");
    FILE *fileEncode = fopen(fileEncryptDest, "wb");
    if (!file || !fileEncode) {
        printf("failed");
        exit(0);
    }

    int c;
    //使用密钥进行加密
    int index=0;
    int passlen=strlen(password);
    while ((c = fgetc(file)) != EOF) {
        char item =password[index++ % passlen];
        printf("encode item==%c",item);
        fputc(c ^ item, fileEncode);
    }

    fclose(fileEncode);
    fclose(file);
}




void decrypt() {
    char *filePath = "D:\\workplace\\code\\GIT\\C\\C\\c6_io\\textEn";
    char *fileEncryptDest = "D:\\workplace\\code\\GIT\\C\\C\\c6_io\\textDe.txt";

    FILE *file = fopen(filePath, "rb");
    FILE *fileEncode = fopen(fileEncryptDest, "wb");
    if (!file || !fileEncode) {
        printf("failed");
        exit(0);
    }

    int c;
    //使用异或进行加密
    while ((c = fgetc(file)) != EOF) {
        fputc(c ^ 5, fileEncode);
    }

    fclose(fileEncode);
    fclose(file);
}

void encrypt() {
    char *filePath = "D:\\workplace\\code\\GIT\\C\\C\\c6_io\\text";
    char *fileEncryptDest = "D:\\workplace\\code\\GIT\\C\\C\\c6_io\\textEn";

    FILE *file = fopen(filePath, "rb");
    FILE *fileEncode = fopen(fileEncryptDest, "wb");
    if (!file || !fileEncode) {
        printf("failed");
        exit(0);
    }

    int c;
    //使用异或进行加密
    while ((c = fgetc(file)) != EOF) {
        fputc(c ^ 5, fileEncode);
    }

    fclose(fileEncode);
    fclose(file);
}

//读取文件大小
void seek() {
    char *filePath = "D:\\workplace\\code\\GIT\\C\\C\\c6_io\\text";
    //读二进制
    FILE *file = fopen(filePath, "rb");
    if (!file) {
        printf("failed");
        exit(0);
    }

    //SEEK_SET 0文件夹头
    //SEEK_CUR 1当前位置
    //SEEK_END 2末尾
    //偏移从0到SEEK_END

    fseek(file, 0, SEEK_END);
    long file_size = ftell(file);

    printf("size===%d", file_size);

    fclose(file);
}

void copy() {
    char *filePath = "D:\\workplace\\code\\GIT\\C\\C\\c6_io\\text";
    char *filePathDest = "D:\\workplace\\code\\GIT\\C\\C\\c6_io\\textCopy";
    //fopen(arg1:path,arg2:模式(r,w,rb(作为二进制文件读),wb(作为二进制文件写))

    //读二进制
    FILE *file = fopen(filePath, "rb");
    //写二进制
    FILE *fileDest = fopen(filePathDest, "wb");

    if (!file || !fileDest) {
        printf("failed");
    }

    //缓冲
    int buffer[512];
    int len;//每次读取的长度
    //fread(arg1:容器，arg2:每次偏移量，arg3:容器大小,file)
    while ((len = fread(buffer, sizeof(int), sizeof(buffer) / sizeof(int), file)) != 0) {
        fwrite(buffer, sizeof(int), len, fileDest);
    }
    fclose(fileDest);
    fclose(file);
}

void write() {
    //D:\workplace\code\GIT\C\C\c6_io\main.c
    char *filePath = "D:\\workplace\\code\\GIT\\C\\C\\c6_io\\text";
    //fopen(arg1:path,arg2:模式(r,w,rb(作为二进制文件读),rw(作为二进制文件写))
    FILE *file = fopen(filePath, "w");//创建一个0b的文件
    if (!file) {
        printf("failed");
    }

    fputs("veroooooo", file);
    fclose(file);

}

void read() {
    char *filePath = "D:\\workplace\\code\\GIT\\C\\C\\c6_io\\text";
    //fopen(arg1:path,arg2:模式(r,w,rb(作为二进制文件读),rw(作为二进制文件写))
    FILE *file = fopen(filePath, "r");
    if (!file) {
        printf("failed");
    }

    //缓冲
    char buffer[10];
    while (fgets(buffer, 10, file)) {
        printf("file==%s", buffer);
    }
    fclose(file);
}
