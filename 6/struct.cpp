#include <iostream>
#include <cstdlib>
using namespace std;

typedef struct human_st {
    const char *name;
    int age;
    int gender;
} human_t;

int main(int argc, char *argv[])
{
    human_t *mg;
    mg = (human_t *)malloc(sizeof(human_t));
    mg->name = "MinGwon";
    mg->age = 21;
    mg->gender = 0;

    cout << "name: " << mg->name << " age: " << mg->age << " gender: " << mg->gender << endl;

    return 0;
}