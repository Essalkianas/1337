#include <unistd.h>
void ft_print_alphabet(void){
    char k = 'a';
    while(k <= 'z'){
        write(1,&k,1);
        k++;
    }
}
int main(){
    ft_print_alphabet();
    return 0;
}