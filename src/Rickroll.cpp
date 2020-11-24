#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <cctype>
#include "functions.h"

using namespace std;

int main(int argc, char* argv[]){
	if(argc>2){
		cout << "Usage:" << argv[0] << " <number>\n";
		return 0;
	}
	srand(time(0));
	bool isRickrollTime = false;//(rand()% 10) == 1;
	if(isRickrollTime) {
		rickrollTheConsole();
		return 0;
	}
	//cout << "no Rick roll today" << endl;
	char* nStr=argv[1];
	int n;
	for(int i = 0; nStr[i]!='\0'; ++i){
		//cout << i << " ";
		if(!isdigit(nStr[i])){
			cout << "that doesn't look like a number" << endl;
			return 0;
		}
	}
	n = atoi(nStr);
	fibonacci(n);
	
}
