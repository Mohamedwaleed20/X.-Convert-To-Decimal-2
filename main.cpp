#include <iostream>
#include <cmath>


using namespace std ;

int main()
{
    int t;
    cin >> t ;
    while(t--)
    {
        int n ;
        cin >> n ;
        int count = 0 ;
        int ans = 0;
        while(n>0)
        {
            count = count + (n%2);
            n=n/2;
        }
        for(int i =0 ; i<count;i++)
        {
            ans = ans+pow(2,i);
        }
        cout << ans << endl ;
    }

    return 0;
}
