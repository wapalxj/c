//
// Created by mu on 2021/3/4.
//

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

struct Cat3 {
    char name[10];
    int age;
};

int main() {
    struct Cat3 cat[10] = {
            {"v1",    1},
            {"v22",   2},
            {"v333",  3},
            {"v4444", 4},
            {},
            {},
            {},
            {},
            {},
            {}
    };

    printf("name=%s,age=%d\n", cat[0].name, cat[0].age);

    struct Cat3 cat9 = {"v999999", 9};
    *(cat + 9) = cat9;
    printf("name=%s,age=%d\n", cat[9].name, cat[9].age);



    //堆区内存
    struct Cat3 *cat2 = malloc(sizeof(struct Cat3) * 10);
    strcpy(cat2->name,"veroooo");
    cat2->age = 8;
    printf("name=%s,age=%d\n", cat2->name, cat2->age);
    free(cat2);
    return 0;
}