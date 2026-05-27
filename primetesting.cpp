#include<iostream>
#include<math.h>
using namespace std;
/*bool isprime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
        
    }
    return true;
}*/

/* It is based on the fact that all primes greater than 3 are of the form 6k ± 1, where k is any integer greater than 0. */
bool isprime(int n)
{
    if(n==2||n==3)
    {
        return true;
    }
    if(n<=1||n%2==0||n%3==0)
    {
        return false;
    }
    for(int i=5;i<sqrt(n);i+=6)
    {
        if(n%i==0||n%i+2==0)
        {
                return false;
        }
    }
    return true;
}
int main()
{
      int n;
      cin>>n;
      cout<<isprime(n);
      return 0;

}