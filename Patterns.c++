// #include<iostream>

// using namespace std;

// int main(){
    // int n,i,j;
    // cin>>n;
    // for(i=0;i<n;i++){
    //     // cout<<"1";
    //     for(j=0;j<n;j++){
    //         cout<<"*";
    //     }
    // cout<<endl;
    // }
    
// }



#include<iostream>

using namespace std;

void print1(int n){
    int i,j;
    for(i =1;i<=n;i++){
        
		for(j = 1; j<=i; j++){
			cout<<"*";
            
		} 
	cout<<endl;
	}
}
void print2(int n){
    int i,j;
    for(i=0;i<n;i++){
        // cout<<"1";
        for(j=0;j<n;j++){
            cout<<"*";
        }
    cout<<endl;
    }
}
void print3(int n){
    int i,j;
    for(i =1;i<=n;i++){
        
		for(j = 1; j<=i; j++){
			cout<<j;
            
		} 
	cout<<endl;
	}
}

void print4(int n){
    int i,j;
    for(i =1;i<=n;i++){
        
		for(j = 1; j<=i; j++){
			cout<<i;
            
		} 
	cout<<endl;
	}
}

void print5(int n){
    int i,j;
    for(i =1;i<=n;i++){
        
		for(j = 1; j<=i; j++){
			cout<<i<<" ";
            
		} 
	cout<<endl;
	}
}

void print6(int n){
    int i,j;
    for(i =1;i<=n;i++){
		for(j = 1; j<=((n-i)+1); j++){
			cout<<"* ";
            
		} 
	cout<<endl;
	}
}

void print7(int n){
    int i,j;
    for(i =1;i<=n;i++){
		for(j = 1; j<=((n-i)+1); j++){
			cout<<j<<" ";
            
		} 
	cout<<endl;
	}
}

void print8(int n){
    int i,j,k,b;
    for(i =0;i<n;i++){
		for(j = 0; j<n-i-1; j++){
			cout<<" ";
        }
        for(j = 0; j<2*i+1; j++){
            cout<<"*";
        }
        for(j = 0; j<n-i-1; j++){
            cout<<" ";
        }     
	cout<<endl;
	}
}

int main(){
    int n;
    cin>>n;
    // print1(n);
    // print2(n);
    // print3(n);
    // print4(n);
    // print5(n);
    // print6(n);
    // print7(n);
    print8(n);
}



// *
// * * 
// * * * 
