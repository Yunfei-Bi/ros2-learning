#include <iostream>
#include <memory>

int main()
{
    auto p1 = std::make_shared<std::string>("This is a str");
    std::cout << "p1 引用计数为 : " << p1.use_count() << ", 指向内存的地址为: " <<p1.get() << "\n";

    auto p2 = p1;
    std::cout << "p1 引用计数为 : " << p1.use_count() << ", 指向内存的地址为: " <<p1.get() << "\n";
    std::cout << "p2 引用计数为 : " << p2.use_count() << ", 指向内存的地址为: " <<p2.get() << "\n";

    p1.reset();
    std::cout << "p1 引用计数为 : " << p1.use_count() << ", 指向内存的地址为: " <<p1.get() << "\n";
    std::cout << "p2 引用计数为 : " << p1.use_count() << ", 指向内存的地址为: " <<p2.get() << "\n";
    std::cout << "p2 指向资源的内容为: " << p2->c_str() << "\n";
    
    return 0;
}