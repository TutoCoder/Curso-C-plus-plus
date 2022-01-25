#include<iostream>

using namespace std;

int main(){
	
	int producto = 0;
	// i, j, k l m
	for(int i=1; i<=10; i++){// 1, 2, 3, ... 10
		cout << "Tabla del " << i << endl;
	
		for(int j=1; j<=10; j++){// 1, 2, 3, ..., 12
			producto = i * j; // 
			cout << i << " X "<< j << " = " << producto << endl;	
		}
		cout << endl  << "-------------------------------------"<< endl;
	}
	
	return 0;
}
