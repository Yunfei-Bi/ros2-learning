### 关于 `int main(int  argc, char **argv)`，看完应该会有更好的理解
- 输入: 
```cpp
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout << argv << "\n";
    cout << *argv << "\n";
    cout << **argv << "\n";
    cout << argv[0] << "\n";
    cout << argv[1] << "\n";
    cout << *argv[0] << "\n";
    cout << *argv[1] << "\n";
    return 0;
}
```
- 输出: 
```cpp
yunfeibi@yunfeibi:~/C++_projects/perf_test$ ./test fhsn
0x7fffcc293fd8
./test // 这里输出的是第一个字符串
.
./test
fhsn
.
f
```
- 注意：
`./test`注释这里，可以参考`C++清华紫书`的一句话
230页第一段话：
> ......这实际上是一个隐含创建的类型为`char`的数组，一个字符串常量就表示这样一个数组的首地址......

注意这里的`字符串常量`是指的`C`风格的字符串常量，`C`风格的字符串可以作为地址

在 C++ 中，C 风格字符串（char[] 或 char*）本质上是指向字符数组首元素的指针，因此 *argv 会输出第一个参数字符串的内容。
