bool isPalindrome(int k){
    int rev=0,temp=k;
    //cout << k << endl;
    while(k){
        rev=rev*10+k%10;
        k=k/10;
    }
    //cout << rev << endl;
    if(rev==temp){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        int max=0,k;
        for(int i=100;i<1000;i++){
            for(int j=100000/i;j<1000;j++){
                k=i*j;
                if(!isPalindrome(k)){
                    continue;
                }
                if((k<n) && (k>max)){
                    max=k;
                }
            }
        }
        cout<<max<<endl;
    }
    return 0;
}
