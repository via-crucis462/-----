#include <stdio.h>
#include <string.h>

void HP_solve() {
    // HP solve implementation
    
}

void NORMAL_solve() {
    // NORMAL solve implementation
}




int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "用法: %s HP|NORMAL\n", argv[0]);
        return 1;
    }

    if (strcmp(argv[1], "HP") == 0) {
        printf("Herry Potter\n");
        HP_solve();
    } else if (strcmp(argv[1], "NORMAL") == 0) {
        printf("Normal\n");
        NORMAL_solve();
    } else {
        fprintf(stderr, "无效参数: %s\n用法: %s HP|NORMAL\n", argv[1], argv[0]);
        return 1;
    }

    return 0;
}