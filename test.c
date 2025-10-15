// Online C compiler to run C program online
#include <stdio.h>

int main() {
// ****    Relational Operators Task 1 *******

int a = 5 , b = 6 ;
printf("1) %d\n",5>4); //-> 1
printf("2) %d\n",5>=4); //->1
printf("3) %d\n",5==4); //-> 0
printf("4) %d\n",5!=4); //-> 1
// printf("5) %d\n",5! =4); //-> 1 err
printf("6) %d\n", a > 6); //-> 0
printf("7) %d\n", a < 6);// -> 1
printf("8) %d\n", a != 6); //->1
// printf("9) %d\n", a = = 6); //->0 err
printf("10) %d\n", a = 6 + 4); //->1 
printf("11) %d\n",a == a + b);//-> 1 0
printf("12) %d\n",a != a + b);// -> 0
printf("13) %d\n",a + b != a + b); //0
// printf("14) %d\n",a + *  b != a + b); //->0 err
printf("15) %d\n",a *  b == a + b);// -> 1
printf("16) %d\n",18 >= 18); //-> 1
printf("17) %d\n",17 <= 18); //-> 1
printf("18) %d\n",170 >= 18 + 15 * 12); //->0 
printf("19) %d\n",170 >= 18 + 15 * 12);// -> 0
printf("20) %d\n",a + b + b + a > b + a + b + a + b != a); //1 


// ****    Relational Operators Task 2 *******

int x = 10, y = 20, z = 10;

printf("1) %d\n", x == z); //  1
printf("2) %d\n", x == y); //  0
printf("3) %d\n", x != y); //  1
printf("4) %d\n", x > y); //  0
printf("5) %d\n", x < y); //  1
printf("6) %d\n", x >= z); //  1
printf("7) %d\n", x <= z); //  1
printf("8) %d\n", x = y); //  0
printf("9) %d\n", x == y); //  0
printf("10) %d\n", x + y > y + z); //  1
printf("11) %d\n", x + y < y + z); //  0
printf("12) %d\n", x + y == y + x); //  1
printf("13) %d\n", x + y != y + z); //  1
printf("14) %d\n", (x + y) > (z + y)); //  1
printf("15) %d\n", x + y + z == y + z + x); //  0
printf("16) %d\n", x == y == z); //  0
printf("17) %d\n", (x == y) == (y == z)); //  1
printf("18) %d\n", x > y == 0); //  1
printf("19) %d\n", x > y + 5); //  0
printf("20) %d\n", x + y * z == y * z + x); //  1

// ***** Operators Task 3 ******
// int a = 7, b = 3, c = 10;

// printf("1) %d\n", a + b > c);//     1
// printf("2) %d\n", a - b < c);//     1
// printf("3) %d\n", a * b >= c);//        0
// printf("4) %d\n", a / b <= c);//        1
// printf("5) %d\n", a % b == c);//        0
// printf("6) %d\n", c % a != b);//        0
// printf("7) %d\n", a * b == c);//        0
// printf("8) %d\n", a + b == c);//        0
// printf("9) %d\n", a - b == c);//        1
// printf("10) %d\n", c / a < b);//        1
// printf("11) %d\n", c / b >= a);//       0
// printf("12) %d\n", a * b + c > b + c * a);//        0
// printf("13) %d\n", a + b * c > a * b + c);//        1
// printf("14) %d\n", (a + b) * c > a * (b + c));//        0
// printf("15) %d\n", a + b + c == c + b + a);//       1
// printf("16) %d\n", a + b + c != a * b * c);//       1
// printf("17) %d\n", a * a > c + b);//        0
// printf("18) %d\n", a + a > b + b + b);//        1
// printf("19) %d\n", (c - b) * a < (b + a) * c);//        1
// printf("20) %d\n", c % (a - b) == a % (c - b));//       0

    return 0;
}