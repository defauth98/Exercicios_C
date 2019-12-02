#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
	int i;	

	while(true){
		int count;
		if((i > 0) && (i % 3 == 0)){
			cout << i << endl;
			count++;
		}

		if(count >= 5){
			break;
		}

		i++;
	}

	return 0;
}