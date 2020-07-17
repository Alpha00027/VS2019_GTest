#include "a_cstring.h"

/**
 * @brief 字符串拷贝函数
 * @param des 目标字符串,长度必须要大于等于源字符串的长度
 * @param src 源字符串
 * @return 目标字符串首地址
*/
char* a_strcpy(char* des, const char* src) {
	if (!des || !src) return nullptr;

	char* address = des;

	while (*src != '\0') {
		*des = *src;
		des++;
		src++;
	}
	*des = '\0';

	return address;
}

/**
 * @brief 字符串长度函数.
 * @param src 字符串
 * @return 字符串长度
*/
size_t a_strlen(const char* src) {
	if (!src) return 0;

	size_t l = 0;

	while (*src != '\0') {
		++l;
		++src;
	}

	return l;
}

/**
 * @brief 将src字符串追加在des尾部,des和src内存区域需要不重叠，且des必须有足够大的空间来存放src
 * @param des 目标字符串
 * @param src 源字符串
 * @return 尾部追加过源字符串的目标字符串
*/
char* a_strcat(char* des, const char* src) {
	if (!des) return nullptr;
	if (!src) return des;

	char* address = des;
	while (*des != '\0') {
		des++;
	}

	while (*src != '\0') {
		*des = *src;
		des++;
		src++;
	}
	*des = '\0';

	return address;
}

/**
 * @brief 比较两个字符串
 * @param s1 字符串1
 * @param s2 字符串2
 * @return s1或s2为nullptr,返回-1;s1<s2,返回-1;s1=s2,返回0;s2>s2,返回1;
*/
int a_strcmp(const char* s1, const char* s2) {
	if (!s1 || !s2)	return -2;

	while (*s1 != '\0' && *s2 != '\0') {
		if (*s1 < *s2) {
			return -1;
		}
		else if (*s1 == *s2) {
			s1++;
			s2++;
		}
		else if (*s1 > * s2) {
			return 1;
		}
	}

	if (*s1 == '\0' && *s2 != '\0') {
		return -1;
	}
	else if (*s1 == '\0' && *s2 == '\0') {
		return 0;
	}
	else if (*s1 != '\0' && *s2 == '\0') {
		return 1;
	}
}
