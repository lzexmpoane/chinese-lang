# Chinese-lang / CN-lang
**by lzexmpoane**

此乃测试版。This is a beta version.  
**Version: Beta 1.4**  
**Made use C++**

## 序 / Preface
> 中文编程？未也，意多。此是妄玩意儿以弄刀笔，写得乱七八糟。非同 wenyan-lang，我若易语言同，简代其文字。非轻易语言兮，谓与之同易语言。无用。别思以中文编程，用英文老老实实编程乎？为何吾写之？只为诉中文编程难以英文。

引文言编程之话：

> ## 序
> 夫唐、虞之世，結繩而足治，屈指而足算。是時豈料百代之後，計算機械之巧，精於公輸之木鳶，善於武侯之流馬；程式語言之多，繁若《天官》之星宿，奇勝《山經》之走獸。鼠、蟹、鑽、魚，或以速稱。蛇、象、駱、犀，各爭文采。方知鬼之所以夜哭，天之所以雨粟。然以文言編程者 ，似所未有。此誠非文脈之所以傳，文心之所以保。嗟予小子，遂有斯志。然則數寸之烏絲猶覆於頭，萬卷之素書未破於手；一身長羈於遠邦，兩耳久曠于雅言。然夫文章者吾之所宿好，程式者偶承時人之謬譽。故希孟不慚年少，莊生不望無涯。乃作斯言。誠未能嘔瀝長吉之心血，亦庶幾免於義山之流沫。既成之後，復學干將鑄劍而自飼，越王嚐糞而當先。自謂偶追《十書》之筆意，但恨少八家之淋漓。此子山所謂士衡撫掌而甘心，平子見陋而固宜。然則雖實覆甕之質，尚存斧正之望；雖乏呂相之金，易字之渴蓋同。此亦開源之大義，吾輩之所以勉勵也。一笑。

## 例 / Example
### 例壹 / Example 1
**此乃例文**
```cn-lang
批注：此程序为书以「问天地好在。」
我有一函数为整数，曰「求和」 括以 我有一数为整数，曰「甲」 隔 我有一数为整数，曰「已」 止
起始
	乃得 「甲」加「已」。
至终
我有一函数为主
起始
	我有一数为整数，曰「戊」。
	我有一数为字串，曰指针「丙」。
	我有一数为字串，曰「丁」。
	「丁」赋以「空串」。
	「丁」赋以「「丁」加「双引「问天地好在。」双引」」。
	「丙」赋以「地址之丁」。
	「戊」赋以「 求和 括以 「十」 隔 「「三」乘「百」」加「「十」加「三」」止」。
	我有一数为整数，曰「临时」。
	「临时」赋以「一」。
	重复直到「临时 不等于 戊」停止
	起始
		我有一言，曰「丁」。
		「临时」赋以「「临时」加「一」」。
	至终
	我需使用命令，曰「暂停」，立即执行。
	乃得 零。
至终
```

**此乃译文**

```cpp
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
//此程序为cout <<以问天地好在;
int 求和 ( int 甲 , int 已 )
{
        return  甲 + 已;
}
int main(int 参数量, char* 参数[])
{
        int 戊;
        string *丙;
        string 丁;
        丁 = "";
        丁 = 丁 + "问天地好在。";
        丙 = &丁;
        戊 =  求和 ( 10 , 3 * 100 + 10 + 3);
        int 临时;
        临时 = 1;
        while(临时 != 戊)
        {
                cout << 丁;
                临时 = 临时 + 1;
        }
        system("pause");
        return  0;
}
```
**虽与之不同，亦不同于思，但不害其运行**

<p>&nbsp;</p>

**此乃输出**
```
问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。问天地好在。请按任意键继续. . .
```
### 例贰 / Example 2
**此乃例文**
```cn-lang
批注：捌皇后问题
我有一列为整数，曰「答案」，其中有「十」组数。
我有一数为整数，曰「计数」。
我有一列为布尔，曰「行」，其中有「「二」乘「十」」组数。
我有一列为布尔，曰「列壹」，其中有「「二」乘「十」」组数。
我有一列为布尔，曰「列贰」，其中有「「二」乘「十」」组数。
我有一函数为无型，曰「输出」 括以 止
起始
    「计数」赋以「「计数」加「一」」。
    我有一数为整数，曰「临时壹」。
    「临时壹」赋以「一」。
    若表达式「「临时壹」 小等 「八」」成立，则继续
    起始
        书「欲访问「答案」之下标「临时壹」为几何」。
        书「空格」。
        「临时壹」赋以「「临时壹」加「一」」。
    至终
    书「换行」。
至终

我有一函数为无型，曰「捌皇后问题」 括以 我有一数为整数，曰「步」 止
起始
    我有一数为整数，曰「临时壹」。
    「临时壹」赋以「一」。
    若表达式「「临时壹」 小等 「八」」成立，则继续
    起始
        若「欲访问「行」之下标「临时壹」为几何 等于 假 并且 欲访问「列壹」之下标「「步」加「临时壹」」为几何 等于 假 并且 欲访问「列贰」之下标「「八」加「步」减「临时壹」」为几何 等于 假」者
        起始
            「欲访问「答案」之下标「步」为几何」 赋 「临时壹」。
            若「「步」等于「八」」者
            起始
                输出 括以 止。
            至终
            「欲访问「行」之下标「临时壹」为几何」 赋 「真」。
            「欲访问「列壹」之下标「「步」加「临时壹」」为几何」 赋 「真」。
            「欲访问「列贰」之下标「「八」加「步」减「临时壹」」为几何」 赋 「真」。
            捌皇后问题 括以「步」加「一」 止。
            「欲访问「行」之下标「临时壹」为几何」 赋 「假」。
            「欲访问「列壹」之下标「「步」加「临时壹」」为几何」 赋 「假」。
            「欲访问「列贰」之下标「「八」加「步」减「临时壹」」为几何」 赋 「假」。
        至终
        「临时壹」赋以「「临时壹」加「一」」。
    至终
至终

我有一函数为主
起始
    「计数」赋以「零」。
    捌皇后问题 括以 一 止。
    书「计数」。
    书「换行」。
    乃得 零。
至终
```

**此乃译文**

```cpp
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
//捌皇后问题
int 答案[10];
int 计数;
bool 行[2 * 10];
bool 列壹[2 * 10];
bool 列贰[2 * 10];
void 输出()
{
    计数 = 计数 + 1;
    int 临时壹;
    临时壹 = 1;
    while (临时壹 <= 8)
    {
        cout << 答案[临时壹];
        cout << " ";
        临时壹 = 临时壹 + 1;
    }
    cout << endl;
}

void 捌皇后问题(int 步)
{
    int 临时壹;
    临时壹 = 1;
    while (临时壹 <= 8)
    {
        if (行[临时壹] == false && 列壹[步 + 临时壹] == false && 列贰[8 + 步 - 临时壹] == false)
        {
            答案[步] = 临时壹;
            if (步 == 8)
            {
                输出();
            }
            行[临时壹] = true;
            列壹[步 + 临时壹] = true;
            列贰[8 + 步 - 临时壹] = true;
            捌皇后问题(步 + 1);
            行[临时壹] = false;
            列壹[步 + 临时壹] = false;
            列贰[8 + 步 - 临时壹] = false;
        }
        临时壹 = 临时壹 + 1;
    }
}

int main(int 参数量, char* 参数[])
{
    计数 = 0;
    捌皇后问题(1);
    cout << 计数;
    cout << endl;
    return  0;
}
```

**虽与之不同，亦不同于思，但不害其运行**

<p>&nbsp;</p>

**此乃输出**
```
1 5 8 6 3 7 2 4
1 6 8 3 7 4 2 5
1 7 4 6 8 2 5 3
1 7 5 8 2 4 6 3
2 4 6 8 3 1 7 5
2 5 7 1 3 8 6 4
2 5 7 4 1 8 6 3
2 6 1 7 4 8 3 5
2 6 8 3 1 4 7 5
2 7 3 6 8 5 1 4
2 7 5 8 1 4 6 3
2 8 6 1 3 5 7 4
3 1 7 5 8 2 4 6
3 5 2 8 1 7 4 6
3 5 2 8 6 4 7 1
3 5 7 1 4 2 8 6
3 5 8 4 1 7 2 6
3 6 2 5 8 1 7 4
3 6 2 7 1 4 8 5
3 6 2 7 5 1 8 4
3 6 4 1 8 5 7 2
3 6 4 2 8 5 7 1
3 6 8 1 4 7 5 2
3 6 8 1 5 7 2 4
3 6 8 2 4 1 7 5
3 7 2 8 5 1 4 6
3 7 2 8 6 4 1 5
3 8 4 7 1 6 2 5
4 1 5 8 2 7 3 6
4 1 5 8 6 3 7 2
4 2 5 8 6 1 3 7
4 2 7 3 6 8 1 5
4 2 7 3 6 8 5 1
4 2 7 5 1 8 6 3
4 2 8 5 7 1 3 6
4 2 8 6 1 3 5 7
4 6 1 5 2 8 3 7
4 6 8 2 7 1 3 5
4 6 8 3 1 7 5 2
4 7 1 8 5 2 6 3
4 7 3 8 2 5 1 6
4 7 5 2 6 1 3 8
4 7 5 3 1 6 8 2
4 8 1 3 6 2 7 5
4 8 1 5 7 2 6 3
4 8 5 3 1 7 2 6
5 1 4 6 8 2 7 3
5 1 8 4 2 7 3 6
5 1 8 6 3 7 2 4
5 2 4 6 8 3 1 7
5 2 4 7 3 8 6 1
5 2 6 1 7 4 8 3
5 2 8 1 4 7 3 6
5 3 1 6 8 2 4 7
5 3 1 7 2 8 6 4
5 3 8 4 7 1 6 2
5 7 1 3 8 6 4 2
5 7 1 4 2 8 6 3
5 7 2 4 8 1 3 6
5 7 2 6 3 1 4 8
5 7 2 6 3 1 8 4
5 7 4 1 3 8 6 2
5 8 4 1 3 6 2 7
5 8 4 1 7 2 6 3
6 1 5 2 8 3 7 4
6 2 7 1 3 5 8 4
6 2 7 1 4 8 5 3
6 3 1 7 5 8 2 4
6 3 1 8 4 2 7 5
6 3 1 8 5 2 4 7
6 3 5 7 1 4 2 8
6 3 5 8 1 4 2 7
6 3 7 2 4 8 1 5
6 3 7 2 8 5 1 4
6 3 7 4 1 8 2 5
6 4 1 5 8 2 7 3
6 4 2 8 5 7 1 3
6 4 7 1 3 5 2 8
6 4 7 1 8 2 5 3
6 8 2 4 1 7 5 3
7 1 3 8 6 4 2 5
7 2 4 1 8 5 3 6
7 2 6 3 1 4 8 5
7 3 1 6 8 5 2 4
7 3 8 2 5 1 6 4
7 4 2 5 8 1 3 6
7 4 2 8 6 1 3 5
7 5 3 1 6 8 2 4
8 2 4 1 7 5 3 6
8 2 5 3 1 7 4 6
8 3 1 6 2 5 7 4
8 4 1 3 6 2 7 5
92

```
-----------
## 新增 / New
1. CN-lang 转 CPP 系统
2. 使用命令行运行

## 待开发 / To be developed
1. 中文数字 -> 阿拉伯数字