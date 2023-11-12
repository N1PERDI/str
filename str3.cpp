#include "str_easy.h"
#include <iostream>
using namespace std;
long long itc_len(string str) {
	int s = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		s++;
	}
	return s;
}
string itc_cmp_str(string str1, string str2, int num) {
	string str3;
	int k = itc_len(str1);

	for (int i = 0; i < itc_len(str1); i++) {
		if (i == num)
		{
			for (int n = 0; n < itc_len(str2); n++)
			{
				str3 += str2[n];
			}
		}
		else {
			str3 += str1[i];
		}
	}
	string itog;
	int start = 0;
	int end = k - 1;
	if (end < start) {
		itog = str3;
	}
	else
	{
		int len = itc_len(str3);
		if (end > len)
		{
			end = len;
		}

		for (int i = start; i <= end; i++)
		{
			itog += str3[i];
		}
	}

	return itog;
}

int itc_find_str(string str1, string str2) {
	int size1 = itc_len(str1);
	int size2 = itc_len(str2);
	std::string a;
	for (int i = 0; i <= size1 - size2; i++)
	{
		for (int q = 0; q < size2; q++)
			a += str1[i + q];
		if (a == str2)
			return i;
		a = "";
	}
	return -1;
}


int itc_max_char_on_end(string str) {
	int itog = 0;
	int itog2 = 0;
	int k = 0;
	for (int i = 0; i <= itc_len(str); i++)
	{
		if (str[i] >= '1' && str[i] <= '9')
		{
			itog2++;
			k++;
		}
		else
		{
			if (itog2 > itog && k > itog)
			{
				itog = itog2;
			}

			itog2 = 0;
			k = 0;
		}
	}
	if (itog2 > itog && k > itog)
	{
		itog = itog2;
	}

	return itog;
}
