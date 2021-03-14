// Problem Code: TALAZY
#define ll long long
#include<iostream>
using namespace std;


int main() {
	int T;
	cin >> T;
	while(T--) {
		ll N, B ,M;
		cin >> N >> B >> M;
		
		ll time = 0;
       while(N != 1) {
          if(N%2 == 0) {
          	time += (N/2)*M + B;
          	M = 2*M;
          	N = N/2;
		  }	else {
		  	time += ((N+1)/2)*M + B;
		  	M = 2*M;
		  	N = (N-1)/2;
		  }
	   }
	   time += N*M;
		cout << time << endl;
	}
	return 0;
}
