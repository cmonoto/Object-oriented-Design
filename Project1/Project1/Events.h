# include <string>
using namespace std;

class Events {

public:
	Events(string ename, string etime,string edecsription, int seats, double evensprice, int evenduration);
	string Getename();
	string Getetime();
	string Getedecsription();
	int Getseats();
	double Getevensprice();
	int Getevenduration();
	int checkseats(int require);
	double amount();
	int cart();
	int reduce(int remove);

private:
	int numtickets = 0;
	string answer;
	string name;
	string time;
	string decsription;
	int seat;
	double price;
	int duration;
	

	





};