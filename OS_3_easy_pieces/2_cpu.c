// code that loops and prints

#include<stdio.h>
#include<stdlib.h>
#include<sys/time.h>
#include<assert.h>
#include <time.h>

void Spin(){
    clock_t start_time = clock();
    while ((clock() - start_time) / CLOCKS_PER_SEC < 1);
}

int main(int argc, char *argv[]){
    if (argc != 2){
        fprintf(stderr, "usage: cpu <string>\n");
        exit(1);
    }
    char *str = argv[1];
    while(1){
        Spin(1);
        printf("%s\n", str);
    }
    return 0;
}
