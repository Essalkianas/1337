#include <unistd.h>
void ft_print_numbers(void){
    char k = '1';
    while(k<='9'){
        write(1,&k,1);
        k++;
    }
}