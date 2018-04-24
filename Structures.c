#include <stdio.h>
#include <stdlib.h>

struct EmailObject {
    char to[50];
    char from[50];
    char subject[50];
    char data[200];
};

int main() {
    struct EmailObject e1;
    struct EmailObject e2;
    struct EmailObject e3;

    strcpy(e1.to, "me@toxxy.co");
    strcpy(e1.from, "test@toxxy.co");
    strcpy(e1.subject, "wop");
    strcpy(e1.data, "this is a bunch of garbage");

    strcpy(e2.to, "me@toxxy.co");
    strcpy(e2.from, "test@toxxy.co");
    strcpy(e2.subject, "wop");
    strcpy(e2.data, "this is a bunch of garbage");

    return 0;
}
