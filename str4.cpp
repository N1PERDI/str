#include "str_easy.h"
#include <iostream>
using namespace std;
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
string itc_three_str(string str1, string str2, string str3)
{
    int pos = itc_find_str(str1, str2);
    while (pos != -1)
    {
        std::string hz = "";
        for (int i = 0; i < pos; i++)
            hz += str1[i];
        hz += str3;
        for (int i = pos + itc_len(str2); i < itc_len(str1); i++)
            hz += str1[i];
        str1 = hz;
        pos = itc_find_str(str1, str2);
    }
    return str1;
}
string itc_slice_str(string str, int start, int end) {
    string itog;

    if (end < start) {
        itog = str;
    }
    else
    {
        int len = itc_len(str);
        if (end > len)
        {
            end = len;
        }

        for (int i = start; i <= end; i++)
        {
            itog += str[i];
        }
    }

    return itog;

}