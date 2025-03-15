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
    int i,j;
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
void print9(int n){
    int i,j;
    for(i =0;i<n;i++){
        for(j = 0; j<i; j++){
			cout<<" ";
        }
        for(j=0;j<2*n-(2*i+1);j++){
            cout<<"*";
        }
        for(j = 0; j<i; j++){
            cout<<" ";
        } 
    cout<<endl;
	}
}
void print10(int n){
    int i,j;
    for(i =0;i<n;i++){
        for(j = 0; j<n-i-1; j++){ // space
			cout<<" ";
        }
        
        for(j = 0; j<2*i+1; j++){ // star
            cout<<"*";
        }
        
        for(j = 0; j<n-i-1; j++){ // space
            cout<<" ";
            
        }  
    cout<<endl;
    }
    for(i =0;i<n;i++)    {
        for(j = 0; j<i; j++){ // space
			cout<<" ";
        }
        for(j=0;j<2*n-(2*i+1);j++){ //Star
            cout<<"*";
        }
        for(j = 0; j<i; j++){  //space
            cout<<" ";
            
        } 
    cout<<endl;
    }
}
void print11(int n){
    int i,j;
    for(i =1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<"*";
        }
    cout<<endl;
	}
    for(i =1;i<=n;i++){
        for(j=1;j<(n-i)+1;j++){
            cout<<"*";
        }
        cout<<endl;
	}
}
void print12(int n){
    int i,j;
    int start = 1;
    for(i =0;i<n;i++){
        if(i%2 == 0) start = 1;
        else start = 0;
        for(j=0;j<=i;j++){
            cout<<start;
            start = 1-start;
        }
    cout<<endl;
	}
}
void print13(int n){
    int i,j;
    for(i =1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<j;
        }   
        for (j=i;j<=n-1;j++){
            cout<<" ";
        }
        for (j=i-1;j<n-1;j++){
            cout<<" ";
        }
        for (j=i;j>0;j--){
            cout<<j;
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
    // print8(n);
    // print9(n);
    // print10(n);
    // print11(n);
    // print12(n);
    print13(n);
}



// *
// * * 
// * * * 
