#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
using namespace std;

vector<int> randomVector(unsigned int N){	
    vector<int> v;
    for(unsigned int i = 0; i < N; i++) v.push_back(rand()%10);
    return v;
}

void showVector(vector<int> &x){
	cout << "[";
	for(unsigned int i = 0; i<x.size(); i++){
		cout << x[i];
		if(i == 4) cout << "]";
		else cout << " ";
	}
}


int dotProduct(vector<int> x,vector<int> y){
	int sum = 0;
	for(unsigned int i = 0; i<x.size(); i++) sum += x[i]*y[i];	
	return sum;
}
int main(){
	srand(time(0));
	vector<int> x = randomVector(5);
	vector<int> y = randomVector(5);
	int z = dotProduct(x,y);
	showVector(x);
	cout << " . ";
	showVector(y);
	cout << " = " << z;
	
	return 0;
}