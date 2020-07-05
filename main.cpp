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
    replace_all_distinct(file, "�������", "exit(0)");
    replace_all_distinct(file, "��ʼ", "{");
    replace_all_distinct(file, "����", "}");
    replace_all_distinct(file, "����һ����Ϊ��", "int main(int ������, char* ����[])");
    replace_all_distinct(file, "����һ����Ϊ", "");
    replace_all_distinct(file, "����һ�ԣ�Ի", "cout << ");
    replace_all_distinct(file, "��ͣ", "\"pause\"");
    replace_all_distinct(file, "����ʹ�����Ի", "system(");
    replace_all_distinct(file, "����ִ��", ")");
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
    replace_all_distinct(file, "��", "0");
    replace_all_distinct(file, "һ", "1");
    replace_all_distinct(file, "��", "2");
    replace_all_distinct(file, "��", "3");
    replace_all_distinct(file, "��", "4");
    replace_all_distinct(file, "��", "5");
    replace_all_distinct(file, "��", "6");
    replace_all_distinct(file, "��", "7");
    replace_all_distinct(file, "��", "8");
    replace_all_distinct(file, "��", "9");
    replace_all_distinct(file, "ʮ", "10");
    replace_all_distinct(file, "��", "100");
    replace_all_distinct(file, "ǧ", "1000");
    replace_all_distinct(file, "��", "10000");
    replace_all_distinct(file, "ʮ��", "100000");
    replace_all_distinct(file, "����", "1000000");
    replace_all_distinct(file, "ǧ��", "10000000");
    replace_all_distinct(file, "��", "100000000");
    replace_all_distinct(file, "ʮ��", "1000000000");
    replace_all_distinct(file, "����", "10000000000");
    replace_all_distinct(file, "ǧ��", "100000000000");
    replace_all_distinct(file, "��", "100000000000");
    replace_all_distinct(file, "��", " * ");
    replace_all_distinct(file, "��", " / ");
    replace_all_distinct(file, "����", " = ");
    replace_all_distinct(file, "��", " = ");
    replace_all_distinct(file, "�˵�", "return ");
    replace_all_distinct(file, "��ַ֮", "&");
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
    replace_all_distinct(file, "������", "!=");
    replace_all_distinct(file, "����", "==");
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