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
void print14(int n){
    int i,j,k = 0;
    for(i =1;i<=n;i++){
        for(j=1;j<=i;j++){
            k = k+1;
            cout<<k; 
        }   
    cout<<endl;
    }
}
void print15(int n){
    int i;
    char j = 'A';
    for(i =0;i<n;i++){
        for(j='A';j<='A'+i;j++){
            cout<<j;
        }   
    cout<<endl;
    }
}
void print16(int n){
    int i;
    char j = 'A';
    for(i =0;i<n;i++){
        for(j='A';j<='A'+(n-1)-i;j++){
            cout<<j;
        }   
    cout<<endl;
    }
}
void print17(int n){
    int i,j;
    char k = 'A';
    for(i =1;i<=n;i++){
        k = 'A'+i-1;
        for(j=1;j<=i;j++){
            cout<<k;
        }   
    cout<<endl;
    }
}
void print18(int n){
    int i,j;
    for(i =0;i<n;i++){
        for(j=0;j<n-i;j++){
            cout<<" ";
        }
        char k = 'A';
        int breakpoint = (2*i+1)/2;
        for(j=1;j<=2*i+1;j++){
            cout<<k;
            if(j<=breakpoint) k++;
            else k--;
        }
        for(j=0;j<n-i;j++){
            cout<<" ";
        }   
    cout<<endl;
    }
}
void print19(int n){
    int i,j;
    char k = 'A';
    for(i =1;i<n;i++){
        for(j=1;j<=i;j++){
            cout<<k;
        } 
    cout<<endl;
    }
}
void print20(int n){
    int i,j;
    char k = 'A';
    for(i=0;i<=n;i++){
        for(k='A'+n-i;k<='A'+n;k++){
            cout<<k;
        }
    cout<<endl;
    }
}
void print21(int n){
    int i, j;
    char k = 'A';
    for (i = 0; i < n; i++) { 
        for (k = 'A' + n - 1; k >= 'A' + n - 1 - i; k--) {  // Corrected loop condition
            cout << k << " ";  // Print before decrementing
        }
        cout << endl;
    }
}
void print22(int n){
    int i, j;
    for (i=0;i<n;i++) { 
        for (j=0;j<n-i;j++) { 
            cout <<"*"; 
        }
        for(j=0;j<=i-1;j++){
            cout<<" ";
        }
        for(j=0;j<=i-1;j++){
            cout<<" ";
        }
        for(j=0;j<n-i;j++){
            cout<<"*";
        } 
        cout << endl;
    }

    // downward shape 
    for (i=0;i<n;i++) { 
        for (j=0;j<i+1;j++){
            cout<<"*";
        }
        for (j=1;j<n-i;j++) { 
            cout <<" "; 
        }
        for(j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for (j=0;j<i+1;j++){
            cout<<"*";
        }
    cout << endl;
    }
}
void print23(int n){
    int i, j;
    for (i=0;i<n;i++) { 
        for (j=0;j<i+1;j++){
            cout<<"*";
        }
        for (j=1;j<n-i;j++) { 
            cout <<" "; 
        }
        for(j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for (j=0;j<i+1;j++){
            cout<<"*";
        }
        cout << endl;
    }
    // downward shape 
    for (i=0;i<n;i++) { 
        for (j=0;j<n-i-1;j++) { 
            cout <<"*"; 
        }
        for(j=0;j<=i;j++){
            cout<<" ";
        }
        for(j=0;j<=i;j++){
            cout<<" ";
        }
        for(j=0;j<n-i-1;j++){
            cout<<"*";
        } 
        cout << endl;
    }
}
void print24(int n){
    int i, j;
    for (i=0;i<n;i++) { 
        for (j=0;j<n;j++){
            if (j == 0 || j == n-1 || i==0 || i == n-1) {
                cout<<"*";
            }
            else cout<<" ";
        }
        cout << endl;
    }
}
void print25(int n){
    int i, j;
    for (i=0;i<n;i++) { 
        for (j=0;j<n;j++){
            if (j == 0 || j == n-1 || i==0 || i == n-1 ) {
                cout<<"*";
            }
            else cout<<" ";
        }
        cout << endl;
    }
}
void print26(int n){
    int i, j;
    for (i=0;i<2*n-1;i++) {   //for iteration
        for (j=0;j<2*n-1;j++){    // for 1,2,3,4
            int top = i;
            int bottom = j;
            int right = ((2*n-1)-1) - j;
            int left = ((2*n-1)-1) - i;
            cout<<n - min(min(top,bottom),min(right,left));

        }
        cout << endl;
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
    // print13(n);
    // print14(n);
    // print15(n);
    // print16(n);
    // print17(n);
    // print18(n);
    // print19(n);
    // print20(n);
    // print21(n);
    // print22(n);
    // print23(n);
    // print24(n);
    // print25(n);
    // print26(n);
}



// *
// * * 
// * * * 
