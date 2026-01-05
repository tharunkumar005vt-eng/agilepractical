#include <iostream>
#include <string>

int main(){
	std::string user_name = "Aadithya";
	float balance = 100; //intital_balance
	int withdraw_amount = 0;
	std::cin >> withdraw_amount;
	if(!(withdraw_amount % 100) && withdraw_amount <= balance){
		balance -= withdraw_amount; // deduct amount
	}
	return 0;
}

