#pragma once

/*---�ַ�������---*/
size_t myStrlen(const char* str);

/*---�ַ�������---*/
char* myStrcpy(char* dest, const char* src);

/*---�ַ���ƴ��---*/
char* myStrcat(char* dest, const char* src);

/*---�Ӵ�����---*/
const char* myStrstr(const char* str1, const char* str2);

/*---�ַ�����---*/
const char* myStrchr(const char* str, int character);

/*---�ַ����Ƚ�---*/
int myStrcmp(const char* str1, const char* str2);

/*---�ַ����Ƚ�num��---*/
char* myStrncpy(char* dest, const char* src, size_t num);

/*---�ַ���ƴ��num��---*/
char* myStrncat(char* dest, const char* src, size_t num);

/*---�ַ����Ƚ�num��---*/
int myStrncmp(const char* str1, const char* str2);

/*---�ڴ濽��num���ֽ�---*/
void* myMemcpy(void* dest, const void* src, size_t num);

/*---�ڴ濽��num���ֽ�---*/
void* myMemmove(void* dest, const void* src, size_t num);