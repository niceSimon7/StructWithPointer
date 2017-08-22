#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <stdio.h>
#include <sys/time.h>

using namespace std;

struct Person
{
    char *name;
    int age;
};

void getPerson1(Person* p){
    p->age = 26;
    p->name = new char[10];
    p->name[0] = 's';
    p->name[1] = 's';
    p->name[2] = 'z';
    p->name[3] = '\0';
}

void getPerson2(Person* p){
    p->age = 26;
    p->name = (char*)malloc(sizeof(char)*10);
    p->name[0] = 's';
    p->name[1] = 's';
    p->name[2] = 'z';
    p->name[3] = '\0';
}

int main()
{

    struct Person simon1, simon2;
    getPerson1(&simon1);
    getPerson2(&simon2);

    printf("%s\n", simon1.name);
    printf("%s\n", simon2.name);
    delete [] simon1.name;
    free(simon2.name);
    simon1.name = NULL;
    simon2.name = NULL;



    return 0;
}
