#include <iostream>

using namespace std;

int power(int a, int b)
    {
        int n = a;
        for(int i =1; i<b; i++)
        {
            a=a*n;;
        }
        //cout<<a;
        return a;
    }
/*   
int cntdigit(long int n)
{
    int count = 0; 
    while (n != 0) { 
        n = n / 10; 
        ++count; 
    } 
    return count;
}
*/
    
int main()
{
    int cnt=0, rem=0, digits=0;
    long int num=0, n=0, sum=0, temp1, temp2;
    
    cout<<"Enter range of numbers";
    cin>>n;
    num = n;
    //digits = cntdigit(n);
    //cout<<digits;
    //cout<<power(n, 2);
    
    for(int i =1; i<n; i++)
    {
        temp2 = i;
        temp1 = i;
        cnt=0;
        sum=0;
        
        while(temp1 != 0)
        {
            temp1/=10;
            cnt++;
        }
        //cout<<"\n count = "<<cnt;
        
        while(temp2!=0)
        {
            rem = temp2 % 10;
            sum+=power(rem, cnt);
            temp2/=10;
        }
    
    if(sum == i)
        {
            cout<<"\n"<<i;
        }
    }
    return 0;
}
