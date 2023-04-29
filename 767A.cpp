#include <iostream>
using namespace std;
bool arr[100001];
 int current=0;
void print(int x, int current2){
	if(x==current2);
{
	for(	int i	=	current2 ;	i>0	;	i--	){
		if(arr[i]){
		cout<<i<<" "	;
			arr[i]=0	;
			current =i-1;
		}
		else {
			break;
		}

	}
}

}
int main() {
 int n;
 cin>>n;
current=n;
 for(int i=0;i<n;i++){
 	int x;
 	cin>>x;
 	arr[x]=1;
 	print(x,current);
   cout<<endl;
 }
 	return 0;
}
