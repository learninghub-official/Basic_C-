void Armstrong_Number(int n){
    int original = n;
    int arm = 0;
    int final = 0;
    int lastdigit;
    while(n>0){
        lastdigit = n%10;
        arm = lastdigit*lastdigit*lastdigit;
        final = final + arm;
        n = n/10;
    }
    cout<<"total: "<< final<<endl;
    if(final == original){
        cout<<"Number is Armstrong"<<endl;
    }
    else cout<<"Number is not Armstrong"<<endl;
}