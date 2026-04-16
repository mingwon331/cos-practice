#include <iostream>
using namespace std;

int run()
{
    //int result;
    __asm__(
        "movq $100, %rax"
        //"moveq $100, %%rax"
        //"movl %%eax, %0;"
        //: "=r" (result)
        //:
        //: "%rax"
    );
    return 0;
    //return result;
};

int main() {
    cout << "The skeleton code for the assembly language" << endl;
    cout << "return value: " << run() << endl;
    return 0;
}