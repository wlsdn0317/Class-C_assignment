#include <iostream>


void swap(int* num1,int* num2){
	int tmp;
	tmp = *num1;
	*num1 = *num2;
	*num2 = tmp;
}
void swap(char* ch1,char* ch2) {
	char tmp;
	tmp = *ch1;
	*ch1 = *ch2;
	*ch2 = tmp;
}
void swap(double* db1, double* db2) {
	double tmp;
	tmp = *db1;
	*db1 = *db2;
	*db2 = tmp;
}
void main() {
	int num1 = 20, num2 = 30;
	swap(&num1, &num2);
	std::cout << num1 << ' ' << num2 << "\n";

	char ch1 = 'A', ch2 = 'Z';
	swap(&ch1, &ch2);
	std::cout << num1 << ' ' << num2 << "\n";

	swap(&num1, &num2);
	std::cout << num1 << ' ' << num2 << "\n";
}
