/*
CN-lang
by lzexmpoane
*/
#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <map>
#include <stack>
#include <queue>
using namespace std;
string file;
string head =
"#include <iostream>\n\
#include <cstdio>\n\
#include <cstring>\n\
#include <string>\n\
#include <fstream>\n\
#include <sstream>\n\
using namespace std;\n";
string Cnm[] = { "��","һ","��","��","��","��","��","��","��","��","ʮ","��","ǧ","��","��",
"��", "Ҽ", "��", "��", "��", "��", "½", "��", "��", "��","ʰ","��","Ǫ","�f","�|" };
int chineseNum2num(wstring s)
{
    map<wchar_t, int> chineseNum;
    chineseNum.insert(pair<wchar_t, int>(L'��', 0));
    chineseNum.insert(pair<wchar_t, int>(L'һ', 1));
    chineseNum.insert(pair<wchar_t, int>(L'��', 2));
    chineseNum.insert(pair<wchar_t, int>(L'��', 3));
    chineseNum.insert(pair<wchar_t, int>(L'��', 4));
    chineseNum.insert(pair<wchar_t, int>(L'��', 5));
    chineseNum.insert(pair<wchar_t, int>(L'��', 6));
    chineseNum.insert(pair<wchar_t, int>(L'��', 7));
    chineseNum.insert(pair<wchar_t, int>(L'��', 8));
    chineseNum.insert(pair<wchar_t, int>(L'��', 9));
    chineseNum.insert(pair<wchar_t, int>(L'ʮ', 10));
    chineseNum.insert(pair<wchar_t, int>(L'��', 100));
    chineseNum.insert(pair<wchar_t, int>(L'ǧ', 1000));
    chineseNum.insert(pair<wchar_t, int>(L'��', 10000));
    chineseNum.insert(pair<wchar_t, int>(L'��', 100000000));
    chineseNum.insert(pair<wchar_t, int>(L'Ҽ', 1));
    chineseNum.insert(pair<wchar_t, int>(L'��', 2));
    chineseNum.insert(pair<wchar_t, int>(L'��', 3));
    chineseNum.insert(pair<wchar_t, int>(L'��', 4));
    chineseNum.insert(pair<wchar_t, int>(L'��', 5));
    chineseNum.insert(pair<wchar_t, int>(L'½', 6));
    chineseNum.insert(pair<wchar_t, int>(L'��', 7));
    chineseNum.insert(pair<wchar_t, int>(L'��', 8));
    chineseNum.insert(pair<wchar_t, int>(L'��', 9));
    chineseNum.insert(pair<wchar_t, int>(L'ʰ', 10));
    chineseNum.insert(pair<wchar_t, int>(L'��', 100));
    chineseNum.insert(pair<wchar_t, int>(L'Ǫ', 1000));
    chineseNum.insert(pair<wchar_t, int>(L'�f', 10000));
    chineseNum.insert(pair<wchar_t, int>(L'�|', 100000000));

    int result = 0, tmp = 0, hnd_mln = 0;
    wchar_t curr_char;
    int curr_digit;
    for (int i = 0; i < s.length(); ++i)
    {
        curr_char = s.at(i);
        if (chineseNum.find(curr_char) == chineseNum.end())
            return -1;
        curr_digit = chineseNum.at(curr_char);

        if (curr_digit == pow(10, 8))//meet ���ڡ� or ���|��
        {
            result = result + tmp;
            result = result * curr_digit;
            //get result before ���ڡ� and store it into hnd_mln
            //reset `result`
            hnd_mln = hnd_mln * pow(10, 8) + result;
            result = 0;
            tmp = 0;
        }
        else
        {
            if (curr_digit == pow(10, 4))//meet ���� or ���f��
            {
                result = result + tmp;
                result = result * curr_digit;
                tmp = 0;
            }
            else
            {
                if (curr_digit >= 10)//meet ��ʮ��, ���١�, ��ǧ�� or their traditional version
                {
                    if (tmp == 0)
                        tmp = 1;
                    result = result + curr_digit * tmp;
                    tmp = 0;
                }
                else
                {
                    tmp = tmp * 10 + curr_digit;
                    /*if (curr_digit != NULL)

                    else
                    {
                        return result;
                    }*/
                }
            }
        }
    }
    result = result + tmp;
    result = result + hnd_mln;
    return result;
}

template <class T>
int getArrayLen(T& array)
{//ʹ��ģ�嶨��һ ������getArrayLen,�ú�������������array�ĳ���
    return (sizeof(array) / sizeof(array[0]));
}
/*��������������������������������
��Ȩ����������ΪCSDN�������Դ�Note����ԭ�����£���ѭCC 4.0 BY - SA��ȨЭ�飬ת���븽��ԭ�ĳ������Ӽ���������
ԭ�����ӣ�https ://blog.csdn.net/u010412858/java/article/details/80354996*/
string& replace_all(string& str, const string& old_value, const string& new_value)
{
    while (true) {
        string::size_type pos(0);
        if ((pos = str.find(old_value)) != string::npos)
            str.replace(pos, old_value.length(), new_value);
        else break;
    }
    return str;
}
string& replace_all_distinct(string& str, const string& old_value, const string& new_value)
{
    for (string::size_type pos(0); pos != string::npos; pos += new_value.length()) {
        if ((pos = str.find(old_value, pos)) != string::npos)
            if (old_value != "˫����" && old_value != "��˫��")
            {
                int pos1, pos2;
                pos1 = str.find("˫����", pos);
                pos2 = str.find("��˫��", pos);
                if (pos1 == string::npos)pos1 = 2147483647;
                if (pos2 == string::npos)pos2 = 2147483647;
                if (pos1 <= pos2)str.replace(pos, old_value.length(), new_value);
            }
            else if (old_value != "������" && old_value != "������")
            {
                int pos1, pos2;
                pos1 = str.find("������", pos);
                pos2 = str.find("������", pos);
                if (pos1 == string::npos)pos1 = 2147483647;
                if (pos2 == string::npos)pos2 = 2147483647;
                if (pos1 <= pos2)str.replace(pos, old_value.length(), new_value);
            }
            else str.replace(pos, old_value.length(), new_value);
        else break;
    }
    return str;
}
int main()
{
    ifstream infile;
    infile.open("cn_soruce.cnlang", ios::in);
    FILE* stream;
    //freopen_s(&stream, "test.cpp", "w", stdout);
    stringstream buf;
    buf << infile.rdbuf();
    file = buf.str();
    cout << head;
    replace_all_distinct(file, "ʼ", "{");
    replace_all_distinct(file, "��", "}");
    replace_all_distinct(file, "����һ����Ϊ��", "int main(int ������, char* ����[])");
    replace_all_distinct(file, "����һ����Ϊ", "");
    replace_all_distinct(file, "����һ�ԣ�Ի", "cout << ");
    replace_all_distinct(file, "����һ��Ϊ", "");
    replace_all_distinct(file, "����", "int");
    replace_all_distinct(file, "С��", "double");
    replace_all_distinct(file, "�ַ�", "char");
    replace_all_distinct(file, "�ִ�", "string");
    replace_all_distinct(file, "����", "bool");
    replace_all_distinct(file, "������", "void");
    replace_all_distinct(file, "�ظ�ֱ����", "while(");
    replace_all_distinct(file, "��ֹͣ", ")");
    replace_all_distinct(file, "����", "(");
    replace_all_distinct(file, "ֹ", ")");
    replace_all_distinct(file, "��", " + ");
    replace_all_distinct(file, "��", " - ");
    replace_all_distinct(file, "��", "-");
    replace_all_distinct(file, "��", ".");
    replace_all_distinct(file, "��", " * ");
    replace_all_distinct(file, "��", " / ");
    replace_all_distinct(file, "����", " = ");
    replace_all_distinct(file, "��", " = ");
    replace_all_distinct(file, "�˵�", "return ");
    replace_all_distinct(file, "��ַ", "&");
    replace_all_distinct(file, "��ָ��", "*");
    replace_all_distinct(file, "ָ��", "*");
    replace_all_distinct(file, "����", ";");
    replace_all_distinct(file, "��", ",");
    replace_all_distinct(file, "Ի", " ");
    replace_all_distinct(file, "��", "");
    replace_all_distinct(file, "��", ";");
    replace_all_distinct(file, "�մ�", "\"\"");
    replace_all_distinct(file, "��", "if(");
    replace_all_distinct(file, "��", ")");
    replace_all_distinct(file, "��", "else ");
    replace_all_distinct(file, "����", ">");
    replace_all_distinct(file, "С��", "<");
    replace_all_distinct(file, "���", ">=");
    replace_all_distinct(file, "С��", "<=");
    replace_all_distinct(file, "����", "==");
    replace_all_distinct(file, "������", "!=");
    replace_all_distinct(file, "����", "&&");
    replace_all_distinct(file, "����", "||");
    replace_all_distinct(file, "ģ��", "%");
    replace_all_distinct(file, "ʹ��", "using");
    replace_all_distinct(file, "���ֿռ�", "namespace");
    replace_all_distinct(file, "����һ�ṹ��", "struct");
    replace_all_distinct(file, "����һ��", "class");
    replace_all_distinct(file, "����", "public"); 
    replace_all_distinct(file, "����", "protected");
    replace_all_distinct(file, "����", ":");
    replace_all_distinct(file, "����", "private");
    replace_all_distinct(file, "�������", "::");
    replace_all_distinct(file, "��֧��", "switch(");
    replace_all_distinct(file, "�����������", ")");
    replace_all_distinct(file, "��֧���", "case ");
    replace_all_distinct(file, "����", "break");
    replace_all_distinct(file, "����", "continue");
    replace_all_distinct(file, "��̬", "const");
    replace_all_distinct(file, "�Զ�", "auto");
    replace_all_distinct(file, "Ĭ��", "default");
    replace_all_distinct(file, "��", "do");
    replace_all_distinct(file, "��ת", "goto");
    replace_all_distinct(file, "�׳�", "throw");
    replace_all_distinct(file, "����", "try");
    replace_all_distinct(file, "����", "catch");
    replace_all_distinct(file, "����", "endl");
    replace_all_distinct(file, "��", "cout <<");
    replace_all_distinct(file, "��", "cin >>");
    replace_all_distinct(file, "��ע��", "//");
    replace_all_distinct(file, "����ʼ", "/*");
    replace_all_distinct(file, "������", "*/");
    replace_all_distinct(file, "ȡ��", "!");
    replace_all_distinct(file, "λ��", "~");
    replace_all_distinct(file, "λ��", "&");
    replace_all_distinct(file, "λ��", "|");
    replace_all_distinct(file, "��", ".");
    replace_all_distinct(file, "��", "new");
    replace_all_distinct(file, "˫����", "\"");
    replace_all_distinct(file, "��˫��", "\"");
    replace_all_distinct(file, "������", "\'");
    replace_all_distinct(file, "������", "\'");
    replace_all_distinct(file, "��", "");
    replace_all_distinct(file, "��", "");
    cout << file;
    return 0;
}