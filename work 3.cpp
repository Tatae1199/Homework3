#include<iostream>
using namespace std;
int main()
{
	float Total_Quizz;
	float first, second, third,mid_term, final,Total1,Total2;
	cout << "========QUIZZES========" << endl;
	cout << "Enter first quizz (10)  : ";
	cin  >> first ; 
	cout << "Enter second quizz (10) : ";
	cin  >> second ; 
	cout << "Enter third quizz (10)  : ";
	cin  >> third ;
	cout << "========MID-TERM========"<< endl;
	cout << "Enter mid-term (40)  : ";
	cin  >> mid_term ;
	cout << "========FINAL========"<< endl;
	cout << "Enter final (50)  : ";
	cin  >> final ;
	Total1 = ( first + second + third ) / 3;
	cout << "Quizz Total : " <<  Total1 << endl; 
	cout << "Mid term : " << mid_term << endl;
	cout << "Final : " << final << endl ;
	Total2 = mid_term + final+Total1 ;
	cout << "Total : " << Total2 << endl;
	cout << "Your score is : " << ((Total2) >=60 ? "PASS " : "FALL ") << endl;
	return(0);
    //Jitkawee Ruamrattanasin SecB No.1
}
