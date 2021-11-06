#inlcude <iostream>

int main(){
	int first,sec,third;
	std::cout<<"Podaj liczby do obliczenia sredniej";
	std::cin>>first;
	std::cin>>sec;
	std::cin>>third;

	int srednia;
	srednia=(first+sec+third)/3;

	std::cout<<"Srednia z liczb wynosi: "<<srednia;

	return 0;
}
