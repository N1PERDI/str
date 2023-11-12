#include "str_easy.h"
#include <iostream>
using namespace std;
string itc_hello_str(string name) {
	return "Hello! " + name;
}
long long itc_len(string str) {
	int s = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		s++;
	}
	return s;
}
void itc_print_copy_str(string str, int number) {
	int s = 0;
	while (s < number)
	{
		cout << str;
		s++;
	}
}
void itc_first_end_three(string str) {
	if (itc_len(str) > 5)
	{
		cout << str[0] << str[1] << str[2] << str[itc_len(str) - 3] << str[itc_len(str) - 2] << str[itc_len(str) - 1];
	}
	else {
		int s = itc_len(str);
		while (s > 0)
		{
			cout << str[0];
			s--;
		}

	}
}
int itc_count_char_in_str(char ch, string str) {
	int k = 0;
	int size = itc_len(str);
	for (int n = 0; n < size; n++)
	{
		if (ch == str[n])
			k++;
	}
	return k++;
}
