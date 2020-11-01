#include <stdio.h>
#include <stdlib.h>

typedef struct user{
    int id; 
    char name[8];
    char htel[12];
    char tel[12];
    
    struct user *next;
}node;
