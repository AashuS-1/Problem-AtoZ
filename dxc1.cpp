#include<iostream>

using namespace std;

bool isPrime(int num)
{
    if (num == 0 || num == 1)
    {
        return false;
    }
    else
    {
        for (int i = 2; i < num/2; ++i)
        {
            if(num%i==0)
            {
                return false;
                break;
            }
        }
    return true;
        
    }
    return true;
    

}

int discount(int billAmount)
{
    int Disc = 0;
    int amount = billAmount;
    for (int i = 0; i < to_string(amount).length(); i++)
    {
       int r =  amount%10;
       amount /= 10;
       if (isPrime(r))
       {
            Disc +=r;
       }
       
    }
    return Disc;
}

int main()
{

    int totalBill;

    cout<< "enter total amount" << endl;
    cin >> totalBill;

    cout << "total Discount is : " << discount(totalBill) << endl;


    return 0;
}