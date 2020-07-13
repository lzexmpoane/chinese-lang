/*
CN-lang
by lzexmpoane
*/
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
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
#include <cstdlib>\n\
#include <string>\n\
#include <fstream>\n\
#include <sstream>\n\
#include <algorithm>\n\
#include <map>\n\
#include <stack>\n\
#include <queue>\n\
using namespace std;\n";
string Cnm[] = { "零","一","二","三","四","五","六","七","八","九","十","百","千","万","亿",
"零", "壹", "贰", "叁", "肆", "伍", "陆", "柒", "捌", "玖","拾","佰","仟","萬","億" };

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
		{
			if (old_value == "本地头文件")
			{
				int pos1;
				pos1 = str.find("」", pos);
				str.replace(pos1, 2, "\"");
			}
			else if (old_value == "引用头文件")
			{
				int pos1;
				pos1 = str.find("」", pos);
				str.replace(pos1, 2, ">");
			}
			else if (old_value == "我需调用控制台命令，曰")
			{
				int pos1;
				pos1 = str.find("」", pos);
				str.replace(pos1, 2, ")");
			}
			else if (old_value != "双引「" && old_value != "」双引" && old_value != "单引「" && old_value != "」单引")
			{
				int pos1, pos2;
				pos1 = str.find("双引「", pos);
				pos2 = str.find("」双引", pos);
				if (pos1 == string::npos)pos1 = 2147483647;
				if (pos2 == string::npos)pos2 = 2147483647;
				if (pos1 <= pos2)
				{
					int pos3, pos4;
					pos3 = str.find("单引「", pos);
					pos4 = str.find("」单引", pos);
					if (pos3 == string::npos)pos3 = 2147483647;
					if (pos4 == string::npos)pos4 = 2147483647;
					if (pos3 <= pos4)str.replace(pos, old_value.length(), new_value);
				}
			}
			else str.replace(pos, old_value.length(), new_value);
		}
		else break;
	}
	return str;
}
int main(int argc, char* argv[])
{
	ifstream infile;
	string sccf;
	if (argc <= 2) { cout << "参数不足会吃不饱哦！   The parameters is insufficient!"; return 0; }
	if (argc >= 5) { cout << "参数给多会吃不消哦！   The parameters is excessive!"; return 0; }
	infile.open(argv[1], ios::in);
	FILE* stream;
	sccf = "";
	if (argc == 3) { sccf = argv[2]; sccf += "\\CNLoutput.cpp"; }
	if (argc == 4) { sccf = argv[2]; sccf += "\\"; sccf += argv[3]; }
	freopen_s(&stream, sccf.c_str(), "w", stdout);
	stringstream buf;
	buf << infile.rdbuf();
	file = buf.str();
	replace_all_distinct(file, "本地头文件", "#include \"");
	replace_all_distinct(file, "引用头文件", "#include <");
	replace_all_distinct(file, "做", "do{");
	replace_all_distinct(file, "到这里开始满足条件「", "}while(");
	replace_all_distinct(file, "」继续循环", ")");
	replace_all_distinct(file, "吾", "我");
	replace_all_distinct(file, "阴", "false");
	replace_all_distinct(file, "阳", "true");
	replace_all_distinct(file, "程序结束", "exit(0)");
	replace_all_distinct(file, "起始", "{");
	replace_all_distinct(file, "云云。", "}");
	replace_all_distinct(file, "云云", "}");
	replace_all_distinct(file, "至终", "}");
	replace_all_distinct(file, "我有一函数为主", "int main(int 参数量, char* 参数[])");
	replace_all_distinct(file, "我有一函数为", "");
	replace_all_distinct(file, "我有一言，曰", "cout << ");
	replace_all_distinct(file, "暂停", "\"pause\"");
	replace_all_distinct(file, "我需调用控制台命令，曰", "system(");
	replace_all_distinct(file, "我有一数为", "");
	replace_all_distinct(file, "我有一列为", "");
	replace_all_distinct(file, "其中有", "[");
	replace_all_distinct(file, "组数", "]");
	replace_all_distinct(file, "欲访问", "");
	replace_all_distinct(file, "之下标", "[");
	replace_all_distinct(file, "为几何", "]");
	replace_all_distinct(file, "空格", "\" \"");
	replace_all_distinct(file, "整数", "int");
	replace_all_distinct(file, "小数", "double");
	replace_all_distinct(file, "字符", "char");
	replace_all_distinct(file, "字串", "string");
	replace_all_distinct(file, "布尔", "bool");
	replace_all_distinct(file, "无型", "void");
	replace_all_distinct(file, "重复直到「", "while(!(");
	replace_all_distinct(file, "」停止", ")){");
	replace_all_distinct(file, "若表达式「", "while(");
	replace_all_distinct(file, "」成立，则继续", "){");
	replace_all_distinct(file, "括以", "(");
	replace_all_distinct(file, "止", ")");
	replace_all_distinct(file, "加", " + ");
	replace_all_distinct(file, "减", " - ");
	replace_all_distinct(file, "负", "-");
	replace_all_distinct(file, "点", ".");
	replace_all_distinct(file, "零", "0");
	replace_all_distinct(file, "一", "1");
	replace_all_distinct(file, "二", "2");
	replace_all_distinct(file, "三", "3");
	replace_all_distinct(file, "四", "4");
	replace_all_distinct(file, "五", "5");
	replace_all_distinct(file, "六", "6");
	replace_all_distinct(file, "七", "7");
	replace_all_distinct(file, "八", "8");
	replace_all_distinct(file, "九", "9");
	replace_all_distinct(file, "十", "10");
	replace_all_distinct(file, "百", "100");
	replace_all_distinct(file, "千", "1000");
	replace_all_distinct(file, "万", "10000");
	replace_all_distinct(file, "十万", "100000");
	replace_all_distinct(file, "百万", "1000000");
	replace_all_distinct(file, "千万", "10000000");
	replace_all_distinct(file, "亿", "100000000");
	replace_all_distinct(file, "十亿", "1000000000");
	replace_all_distinct(file, "百亿", "10000000000");
	replace_all_distinct(file, "千亿", "100000000000");
	replace_all_distinct(file, "兆", "100000000000");
	replace_all_distinct(file, "乘", " * ");
	replace_all_distinct(file, "除", " / ");
	replace_all_distinct(file, "赋以", " = ");
	replace_all_distinct(file, "赋", " = ");
	replace_all_distinct(file, "乃得", "return ");
	replace_all_distinct(file, "地址之", "&");
	replace_all_distinct(file, "地址", "&");
	replace_all_distinct(file, "的指针", "*");
	replace_all_distinct(file, "指针", "*");
	replace_all_distinct(file, "句完", ";");
	replace_all_distinct(file, "隔", ",");
	replace_all_distinct(file, "曰", " ");
	replace_all_distinct(file, "，", "");
	replace_all_distinct(file, "。", ";");
	replace_all_distinct(file, "空串", "\"\"");
	replace_all_distinct(file, "若", "if(");
	replace_all_distinct(file, "者", ")");
	replace_all_distinct(file, "则", "else ");
	replace_all_distinct(file, "大于", ">");
	replace_all_distinct(file, "小于", "<");
	replace_all_distinct(file, "大等", ">=");
	replace_all_distinct(file, "小等", "<=");
	replace_all_distinct(file, "不等于", "!=");
	replace_all_distinct(file, "等于", "==");
	replace_all_distinct(file, "并且", "&&");
	replace_all_distinct(file, "或者", "||");
	replace_all_distinct(file, "模以", "%");
	replace_all_distinct(file, "使用", "using");
	replace_all_distinct(file, "名字空间", "namespace");
	replace_all_distinct(file, "我有一结构体", "struct");
	replace_all_distinct(file, "我有一类", "class");
	replace_all_distinct(file, "公开", "public");
	replace_all_distinct(file, "保护", "protected");
	replace_all_distinct(file, "如下", ":");
	replace_all_distinct(file, "隐藏", "private");
	replace_all_distinct(file, "作用域的", "::");
	replace_all_distinct(file, "分支「", "switch(");
	replace_all_distinct(file, "」有如下情况", ")");
	replace_all_distinct(file, "分支情况", "case ");
	replace_all_distinct(file, "乃止也", "break");
	replace_all_distinct(file, "乃继续", "continue");
	replace_all_distinct(file, "静态", "const");
	replace_all_distinct(file, "自动", "auto");
	replace_all_distinct(file, "默认", "default");
	replace_all_distinct(file, "乃跳转", "goto");
	replace_all_distinct(file, "乃抛出", "throw");
	replace_all_distinct(file, "乃试也", "try");
	replace_all_distinct(file, "捕获结果", "catch");
	replace_all_distinct(file, "换行", "endl");
	replace_all_distinct(file, "书", "cout << ");
	replace_all_distinct(file, "读至", "cin >> ");
	replace_all_distinct(file, "批注：", "//");
	replace_all_distinct(file, "批曰。", "//");
	replace_all_distinct(file, "长批始", "/*");
	replace_all_distinct(file, "长批终", "*/");
	replace_all_distinct(file, "取反", "!");
	replace_all_distinct(file, "位反", "~");
	replace_all_distinct(file, "位与", "&");
	replace_all_distinct(file, "位或", "|");
	replace_all_distinct(file, "的", ".");
	replace_all_distinct(file, "新", "new");
	replace_all_distinct(file, "双引「", "\"");
	replace_all_distinct(file, "」双引", "\"");
	replace_all_distinct(file, "单引「", "\'");
	replace_all_distinct(file, "」单引", "\'");
	replace_all_distinct(file, "「", "");
	replace_all_distinct(file, "」", "");
	cout << head;
	cout << file;
	infile.close();
	fclose(stdout);
	return 0;
}