# Chinese-lang / CN-lang
**by lzexmpoane**

此乃测试版。This is a beta version.  
**Version: Beta 1.0**  
**Made use C++**

## 序
```
中文编程？未也，意多
此是妄玩意儿以弄刀笔，写得乱七八糟
非同 wenyan-lang
我若易语言同
简代其文字
非轻易语言兮
谓与之同易语言
无用
别思以中文编程，用英文老老实实编程乎
```
## 例
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
	我有一数为字串，曰「丙」的指针。
	我有一数为字串，曰「丁」。
	「丁」赋以「空符」。
	「丁」赋以「「丁」加「双引「问天地好在。」双引」」。
	「丙」赋以「地址之丁」。
	「戊」赋以「 求和 括以 「十」 隔 「「三」乘「百」」加「「十」加「三」」止」。
	我有一数为整数，曰「临时一」。
	重复直到「临时一等于戊」停止
	起始
		我有一言，曰「丁」。
		「临时一」赋以「「临时一」加「一」」。
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
#include <string>
#include <fstream>
#include <sstream>
using namespace std;
//此程序为cout <<以问天地好在;
int 求和 ( int 甲 , int 已 )
{
        return  甲 + 已;
}
int main(int 参数量, char* 参数[])
{
        int 戊;
        string 丙*;
        string 丁;
        丁 = 空符;
        丁 = 丁 + "问天地好在。";
        丙 = &丁;
        戊 =  求和 ( 10 , 3 * 100 + 10 + 3);
        int 临时1;
        while(临时1==戊)
        {
                cout << 丁;
                临时1 = 临时1 + 1;
        }
        system("pause");
        return  0;
}
```
**虽与之不同，亦不同于思，但不害其运行**