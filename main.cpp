#inlcude <iostream>

int main(){
	int a,b,c,d;
	std::cout<<"Podaj 4 liczby do obliczenia sredniej";
	std::cin>>a;
	std::cin>>b;
	std::cin>>c;
	std::cin>>d;

	int srednia;
	srednia=(a+b+c+d)/4;

	std::cout<<"Srednia z liczb wynosi: "<<srednia;

	return 0;
}
