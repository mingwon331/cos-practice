#include <iostream>
#include <cstdlib>
using namespace std;

typedef struct human_st {
    const char *name;
    int age;
    void (*print)(struct human_st *);
} human_t;

void print_info1(human_t *h)
{
    cout << "name: " << h->name << " age: " << h->age << endl;
}

void print_info2(human_t *h)
{
    cout << "name: " << h->name << endl;
}

int main(int argc, char *argv[])
{
    human_t *mg;
    mg = (human_t *)malloc(sizeof(human_t));
    mg->name = "MinGwon";
    mg->age = 21;
    mg->print = print_info2;

    mg->print(mg);

    return 0;
}