#include<iostream>
using namespace std;
int main(){
	 int arr[100][100];
	 int rows,cols,i,j;
	 cin>>rows>>cols;
	 for(i=0;i<rows;i++){
	 	for( j=0;j<cols;j++){
	 		cin>>arr[i][j];
	 	}
	 }
	 int target;
	 cin>>target;
	 for(i=0;i<rows;i++){
	 	for(j=0;j<cols;j++){
	 		if(target==arr[i][j]){
	 			cout<<target<<" "<<i<<" "<<j<<endl;
	 			// return 0
	 			break;
	 		}
	 	}
	 	if(j!=cols){
	 		break;
	 	}
	 }
	 if(i==rows){
	 	cout<<"Not found"<<endl;
	 }

	return 0;
}