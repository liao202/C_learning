#pragma once

/*---字符串长度---*/
size_t myStrlen(const char* str);

/*---字符串拷贝---*/
char* myStrcpy(char* dest, const char* src);

/*---字符串拼接---*/
char* myStrcat(char* dest, const char* src);

/*---子串查找---*/
const char* myStrstr(const char* str1, const char* str2);

/*---字符查找---*/
const char* myStrchr(const char* str, int character);

/*---字符串比较---*/
int myStrcmp(const char* str1, const char* str2);

/*---字符串比较num个---*/
char* myStrncpy(char* dest, const char* src, size_t num);

/*---字符串拼接num个---*/
char* myStrncat(char* dest, const char* src, size_t num);

/*---字符串比较num个---*/
int myStrncmp(const char* str1, const char* str2);

/*---内存拷贝num个字节---*/
void* myMemcpy(void* dest, const void* src, size_t num);

/*---内存拷贝num个字节---*/
void* myMemmove(void* dest, const void* src, size_t num);