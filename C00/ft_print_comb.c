#include <unistd.h>
void ft_print_number(char a,char b, char c){
    write(1,&a,1);
    write(1,&b,1);
    write(1,&c,1);
    if(a<'7'){
        write(1,",",1);
        write(1," ",1);
    }
}
void ft_print_comb(void){
    char a = '0', b = '1', c = '2';
    for(a ='0';a<='7';a++){
        for(b = a + 1;b <='8';b++){
            for(c = b + 1;c<='9';c++){
                ft_print_number(a,b,c);
            }
        }
    }
}
int main(){
    ft_print_comb();
    return 0;
}