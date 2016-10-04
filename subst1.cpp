#include<bits/stdc++.h>
#include<array>

using namespace std ;

bool compare(const array<int, 3>& x, const array<int,3>& y){
    if(x[1] == y[1])
        return x[2] < y[2]; 
    else
        return x[1] < y[1];
}

void ps(vector<array<int,3>> a, int n){
    for(int i = 0 ; i< n ;i ++){
        cout << a[i][0] << "  " << a[i][1] << "   " << a[i][2] << endl ;
    }
}

vector<int> buildSuffixArray(char txt[], int n){
    vector<array<int, 3>> suffixes(n); 
    vector<int> indices(n);
    
    // To store the previous rank
    int prerank ; 
    for(int i = 0 ; i < n-1 ; i++){
        suffixes[i] = {i, txt[i]-'A', txt[i+1] - 'A'};
    }
    // This line is changed from suffix array construction 
    // as per the question
    suffixes[n-1] = {n-1, txt[n-1]-'A', -1};

    for(int k = 2 ; k < 2*n ; k *= 2){
        stable_sort(suffixes.begin(), suffixes.end(), compare);
        prerank = suffixes[0][1];
        for(int i = 1 ; i < n ; i++){
            // Compare the suffix, if the current suffix is greater than the 
            // previous one (for k characters), then increase the rank 
            // else keep it same
            if(suffixes[i][1] == prerank and suffixes[i][2] == suffixes[i-1][2]){
                suffixes[i][1] = suffixes[i-1][1];
            }

            else{
                prerank = suffixes[i][1];
                suffixes[i][1] = suffixes[i-1][1] + 1 ;
            }
        }

        for(int i = 0 ;i < n ; i++){
            indices[suffixes[i][0]] = i ;           
        }

        for(int i = 0 ; i  < n; i++){
            suffixes[i][2] = ((suffixes[i][0] + k) < n) ? suffixes[indices[(suffixes[i][0] + k)%n]][1] : -1;
        }
    }
    vector<int> suffixArray(n) ; 
    for(int i = 0 ;i < n ; i++){
        suffixArray[i]= suffixes[i][0];
    }
    return suffixArray ;
}

void pv(vector<int> a, int n){
    for(int i = 0 ;i < n ; i++){
        cout << a[i] << " " ; 
    }
    cout << endl ;
}

int LCP(int i,int j,int n)
{
    int res = 0;
    if(i==j)
        return n - i;
    for(int stp = ceil(log(n)/log(2)) ; stp>=0 && i < n && j < n ; stp--)
        if(rank[stp][i] == rank[stp][j])
        {
            res += 1<<stp;
            i += 1<<stp;
            j += 1<<stp;
        }
    return res;
}
int LCParray(char s[],vector<int> p[],int n)
{
    int sum = 0;
    for(int i = 1 ; i < n ; i++)
        sum += (LCP(p[i-1],p[i],n));
    return sum;
}


int main()
{
    char txt[100001];   
    int t ;
    cin >> t ; 
    while(t--){
       cin >> txt ;
       int n = strlen(txt);
       vector<int> suffixArray;
       suffixArray =  buildSuffixArray(txt, n);
        long long lcpSum = 0 , suffixSum =  0 ; 
        lcpSum = LCParray(txt, suffixArray, n);
       for(int i = 0 ;i < n; i++){
            suffixSum += suffixArray[i];
        }
        cout << (long long) n*n - lcpSum - suffixSum ;
       pv(suffixArray, n);
    }
return 0 ;
}
