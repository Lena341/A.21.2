# A.21.2
C++ exercise

Set the abstract class with the name Product, which contains as protected fields the code and price of the product. Set the class Book with public access to Product with the private
field publishing house which is type string. Also, set the class Car with public access to Product and with the private field called horsepower. Add the right functions to the 
classes so that the following program works

int main()
{
	Book b(1, 2, "pub"); /*The code should become 1, the price 2, and the publishing house pub */
	Car c(4, 5, 6); /*The code should become 4, the price 5, and the horsepower 6 */
	Product& p1 = b;
	Product& p2 = c;
	p1.show(); /*The program should show all the data of the book, that is 1,2 and pub */
	p2.show(); /*The program should show all the data of the book, that is 4,5 and 6 */
	return 0;
}

Note:
