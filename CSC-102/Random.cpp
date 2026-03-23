#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void swapVariables(int &a , int &b) {
    int temp = a ;
    a = b ;
    b = temp;
}
void peakValley(int* a , int n) {
    for(int i = 1 ;i <= n ; i+=2) {
        int curr = i ;
        if(a[i-1] > a[curr]) {
            curr = i - 1 ;
        }
        if(i+1 <= n && a[i+1] > a[curr]) {
            curr = i + 1;
        }
        if(curr != i) {
            swapVariables(a[i] , a[curr]) ;
        }
    }
}

void getPairs(int* a , int n , int x) {
    int left = 0 ;
    int right = n-1 ;

    while(left < right) {
        int sum = a[left] + a[right] ;

        if(sum == x) {
            cout<<a[left]<<" "<<a[right]<<endl; 
            int u = a[left] ;
            int v = a[right] ;
            
            while(right >= 0 && a[right] == v) {
                right--;
            }
            while(left < n && a[left] == u) {
                left++;
            }
        }
        else if(sum > x) {
            right--;
        }
        else{
            left++;
        }
    }
}

void sortBin(int* a , int n) {
    int pos_0 = 0;
    for(int i = 0 ; i < n ; i++) {
        if(a[i] == 0) {
            int temp = a[pos_0] ;
            a[pos_0] = a[i] ;
            a[i] = temp ;
            pos_0++;
        }
    }
}
long long int minSwaps(int* a , int n) {
    long long int swaps = 0 ;
    int cnt_1 = 0 ;
    for(int i = 0 ; i < n ; i++) {
        if (a[i]== 1){
            cnt_1++ ;
        }
        else {
            swaps += cnt_1 ;
        }
    } 
    return swaps ;
}

void reverseArray(int* a , int n) {
    for(int i = 0 ; i < n/2 ; i++) {
        int temp = a[i] ; 
        a[i]  = a[n - i - 1] ;
        a[n - i - 1] = temp;
    }
}
void leftRotate(int* a , int n , int k){
    reverseArray(a , k) ;
    reverseArray((a+k) , n - k) ;
    reverseArray(a , n) ;
}

bool isPrime(long long int x) {
    if(x<2) return false ;

    for(int i = 2 ; i*i <= x ; i++) {
        if(x%i==0) return false ;
    }
    return true ;    
}
bool isCenteredHeptagonal(long long int x) {
    long long int y = 56*x - 7 ;
    long long int z = sqrt(y) ;
    if(y!=z*z) return false ;

    if((7+z)%14!=0) return false ;

    return true ;
}
int countCHprimes(int* a, int n) {
    int count = 0 ;
    for(int i = 0 ; i < n ; i++) {
        if(isPrime(a[i]) && isCenteredHeptagonal(a[i])) {
            count++;
        }
    }
    return count ;
}

bool isZigZag(int* a ,int n) {
    if(n%2==0) return false ;

    int num_odd = n/2 ;
    int num_even = n - num_odd ;

    long long int sum = 0 ;
    for(int i = 0 ;i < n; i++) {
        sum+=a[i];
    }
    if((sum+num_odd)%n!=0) return false ;

    return true ;
}
long long int minCost(int* a ,int n) {
    if(!isZigZag) return -1 ;
    long long int sum = 0 ;
    for(int i = 0 ;i < n; i++) {
        sum+=a[i];
    }
    long long cost = 0 ;
    int num_odd = n/2 ;
    int num_even = n - num_odd ;

    long long x = (sum + num_odd) / n ;
    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) {
            cost += abs(a[i] - x);
        } else {
            cost += abs(a[i] - (x - 1));
        }
    }

    return cost / 2 ;
}

int countWords(const string &str) {
    int count = 0;
    int n = str.length();

    for (int i = 0; i < n; i++) {
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' ')) {
            count++;
        }
    }

    return count;
}

int recursiveSum( int n) {
    if (n <= 0) {
        return 0;
    }
    int partialSum = 0;
    for ( int i = 1; i <= n; i++) {
        partialSum += recursiveSum( i / 2);
    }
    return partialSum + n;
}

void print(int* a , int n) {
    for(int i = 0 ; i < n ; i++){
        cout<<a[i]<<" " ;
    }
    cout<<endl ;
}

void printMatrix(){
    
}
int main() {
    int a[] = {-2,7,3,0,5} ;
    int n = sizeof(a)/sizeof(a[0]) ;
    string s = "Hi My name is Garv";
    cout<<recursiveSum(10)<<endl ;
    
    return 0;
}