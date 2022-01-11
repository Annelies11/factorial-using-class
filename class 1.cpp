#include <iostream>

using namespace std;

class student{
	public:
		int nim;
		string name;
		string status;
		student(int n, string nm, string st) {
			nim=n;
			name=nm;
			status=st;
		}
		
		void show() {
			cout<<"Nama   : "<<name<<endl;
			cout<<"NIM    : "<<nim<<endl;
			cout<<"Status : "<<status<<endl;
			cout<<endl;
		}
};


int main() {
	int num;
	string nama;
	//cin>>num>>nama;
	student aris(122919, "Bang-Bang", "I'll count to ten then open up my eyes.");
	student mahmud(110399, "feat", "If you gone I'll take it as a sign.");
	student keane(337716, "Ether Weaver", "But if you stay, then baby hold me tight.");
	student ether(11856, "Words of a Lullaby", "and send me off with the words of a lullaby.");
	aris.show();
	mahmud.show();
	keane.show();
	ether.show();
}
