#include<stdio.h>
#include<string.h>

void subString(char *orig, char *substr, int index, int length){

    if(index >= strlen(orig)){
        substr[0] = '\0';
        return;
    }

    int i = 0;
    while(i < length && orig[index - i] != '\0'){
        substr[i] = orig[index + i];
        i++;
    }
    substr[length] = '\0';
}

int main(){

    char product_code[] = "100-440-0.750-3434-A";
    char part_number[4];
    char manu_id[4];
    char supp_id[5];

    subString(product_code, part_number, 0, 3);
    subString(product_code, manu_id, 4, 3);
    subString(product_code, supp_id, 14, 4);

    printf("%s \n", part_number);
    printf("%s \n", manu_id);
    printf("%s \n", supp_id);
    
    return 0;
}