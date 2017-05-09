# include <string>


using namespace std;

class Concessions{

public:
	Concessions(string cname, string cdescription, string csize, double lprice,double mprice, double sprice , int num1, int num2,int  num3);
	string Getcname();
	string Getcdescription();
	string Getcsize();
	double Getlprice();
	double Getmprice();
	double Getsprice();
	int Getnum1();
	int Getnum2();
	int Getnum3();
	int checkNum1(int n1);
	int checkNum2(int n2);
	int checkNum3(int n3);
	int cart1();
	int cart2();
	int cart3();
	int reduce1(int rm1);
	int reduce2(int rm2);
	int reduce3(int rm3);
	double amount1();
	double amount2();
	double amount3();
	double total();
	void print1();
	void print2();
	void print3();
	void printamount1();
	void printamount2();
	void printamount3();


private:
	string name;
	string description;
	string size;
	double pricel;
	double pricem;
	double prices;
	int number1;
	int number2;
	int number3;
	int larNum = 0;
	int midNum = 0;
	int smaNum = 0;








};