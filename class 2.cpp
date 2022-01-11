#include <iostream>
#include <vector>

using namespace std;

class faktorial {
	private:
		int n, n1 = 1, f;
		vector<int> isi;
		public:
			void masukkan() {
				cout<<"Masukkan angka : ";
				cin>>n;
			}
			void hitung() {
				if(n==0||n==1) {
					cout<<"Faktorial "<<n<<" adalah 1."<<endl;
					f=1;
				} else {
					f=1;
					while(n1 <= n) {
						isi.push_back(n1);
						f=n1*f;
						n1++;
					}
				}
			}
			void tampilkan() {
				cout<<"Hasil faktorial "<<n<<" adalah : "<<f<<endl;
				cout<<"Isi faktorial : ";
				for(int i = 0; i < (isi.size()-1); i++) {
					cout<<isi[i]<<" x ";
				}
				cout<<isi.back()<<" : "<<f<<endl;
			}
};

int main() {
	faktorial f;
	f.masukkan();
	f.hitung();
	f.tampilkan();
	
	return 0;
}
