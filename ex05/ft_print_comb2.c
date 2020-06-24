#include <stdio.h>
#include <unistd.h>

int ft_putchar(char c) {
	write(1, &c, 1);
	return(0);

}
void ft_print_comb(void)
	char x;
   	char y;
   	char z;

	x = '0';
	while(x <= '7' ) {
		y = x +1;
	while(y <= '8') {
		z = y +1;
	while(z <= '9') {
		ft_putchar(x, y ,z);
		z++;
	}
	    y++;
	}
	    x++;
	}

int main(void) {
    ft_print_comb2();
	return 0;
}

	


	



			
					
	
