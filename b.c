#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main() {
    uint8_t v1 = 0;
    int v2 = 0;
    char v3[31];
    uint16_t v4[10]={0,};

    while (v4[v1] < UINT16_MAX && v1 < 10) {
        v1++;
        printf("v4[%d]: %p\n", v1, &v4[v1]);
        v2 += v1;

        FILE *fp = fopen("/flag.txt", "r");
        fgets(v3, 31, fp);
        fclose(fp); 
        
        fp = fopen("/home/stupid_gcc/flag.txt", "w");
        fwrite(v3, 31, 1, fp);
        fclose(fp); 
        
    }
    return 0;
}