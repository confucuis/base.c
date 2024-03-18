#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 50

struct Config {
    char name[MAX_LEN];
    int age;
    char city[MAX_LEN];
};

int main() {
    struct Config config;
    
    FILE *file = fopen("config.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    
    char line[MAX_LEN];
    while (fgets(line, sizeof(line), file)) {
        char key[MAX_LEN], value[MAX_LEN];
        sscanf(line, "%[^=]=%[^\n]", key, value);
        
        if (strcmp(key, "Name") == 0) {
            strcpy(config.name, value);
        } else if (strcmp(key, "Age") == 0) {
            config.age = atoi(value);
        } else if (strcmp(key, "City") == 0) {
            strcpy(config.city, value);
        }
    }
    
    fclose(file);
    
    // 输出配置项的值
    printf("Name: %s\n", config.name);
    printf("Age: %d\n", config.age);
    printf("City: %s\n", config.city);
    
    return 0;
}
