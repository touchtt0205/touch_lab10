#include<iostream>
using namespace std;
void  printO(int N,int A){
	if(N >0 && A>0){
	for(int i=1;i<=N;i++){
		for(int j=1;j<=A;j++){
			cout<<"O";
		}cout<<"\n";
	}
	}else{
		cout<<"Invalid input";
	}
}
//Write the function printO() here

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
