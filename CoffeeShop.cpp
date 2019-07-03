class CoffeeShop {
	public: 
	double price_of_coffee;
	double price_of_latte;
	double price_of_espresso;
	
	CoffeeShop(int number_of_cofees, int number_of_espressos, int number_of_lattes);
	
	void set_number_of_coffees(int num);
	void set_number_of_lattes(int num);
	void set_number_of_espressos(int num);
	double calc_total_price();
	
	private: 
	int number_of_coffees;
	int number_of_lattes;
	int number_of_espressos;
	
};

CoffeeShop::set_number_of_cofees(int num) {
	this.number_of_coffees = num;	
}
CoffeeShop::set_number_of_lattes(int num) {
	this.number_of_lattes = num;	
}
CoffeeShop::set_number_of_espressos(int num) {
	this.number_of_espressos = num;	
}
CoffeeShop::calc_total_price() {
	return number_of_cofees * price_of_coffee + number_of_lattes * price_of_latter + number_of_espressos * price_of_espressos;
}
CoffeeShop::CoffeeShop(int price_of_cofees, int number_of_espressos, int number_of_lattes) {
	
	
}
int main() {
	
}