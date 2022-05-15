#include <iostream>
#include <cstdio>
using namespace std;

int height = 20;
bool status = true;

namespace local {
    int age = 31;
}

namespace localApi
{
    namespace v1
    {
        int sex = 1;
        int age = 31;
    } // namespace v1
   
    
} // namespace localApi

int getHeight() {
    return height;
}


int main() {
    std::cout << "Hello, World!" << std::endl;
    // 作用域分辨符
    printf("local age is %d\n", local::age);
    printf("api v1 %d, %d \n", localApi::v1::sex, localApi::v1::age);
    // 引用
    int &p = localApi::v1::age;
    printf("point is %d\n", &height);
    return 0;
}
