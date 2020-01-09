#include<iostream>

using namespace std;
int main(){
	int x[5]={1,2,3,4,5};
	int* xp=x;
	for(int n=0;n<=4;n++){
		cout<<"x"<<n<<"="<<x+n<<endl; 
	}
	for(int n=0;n<=4;n++){
		cout<<"&["<<n<<"]"<<&xp[n]<<endl;
	}
	for(int n=0;n<=4;n++){
		cout<<"x["<<n<<"]="<<*xp+n<<endl;
		cout<<"x["<<n<<"]="<<xp[n]<<endl;
	}
	for(int n=0;n<=4;n++){
		cout<<*xp<<endl;
		xp++;
	}
	system("pause");
	return 0;	
}
