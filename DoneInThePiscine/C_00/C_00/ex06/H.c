#include <unistd.h>


void	ft(void){
	int a;
	int b;
	int c;
	int d;
	a = '0';
	while (a <= '9'){
		b = '0';
		while (b <= '8') {
			d = b + 1;
			while (c <= '9' ){
				while (d <= '9'){
				write (1, &a, 1);
				write (1, &b, 1);
				write (1, " ", 1);
				write (1, &c, 1);
				write(1, &d, 1);
				write(1, ",", 1);

				d++;
				}
			d = '0';
			c++;
			}
		c = a;
		b++;
		}
	a++;
	}
}

int main (){
	ft();
}
