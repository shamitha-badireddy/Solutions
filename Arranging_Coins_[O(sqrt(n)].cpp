#include<bits/stdc++.h>
using namespace std;
class solution
{
    public:
        int arrangeCoins(int n)
        {
            int temp = n;
            int count = 0;
            for(int i=1;temp>=i;i++)
            {
                temp-=i;
                count++;
            }
            return count;
        }
};
int main()
{
    /*
        1+2+3+4......+k = n;
        k*(k+1)/2=n;
    */
}
