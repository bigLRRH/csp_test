#include <iostream>
#include <list>
using namespace std;
struct coupon
{
    int price;
    int t;
    coupon(int price, int t) : price(price), t(t) {}
};
int main()
{
    int n;
    int cost(0);
    list<coupon> coupons;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int form, price, t;
        cin >> form >> price >> t;
        coupons.remove_if([=](auto x)
                          { return t - x.t > 45; });
        if (form)
        { // 公交车
            bool flag = true;
            for (auto i = coupons.begin(); i != coupons.end(); ++i)
            {
                if (i->price >= price)
                {
                    flag = false;
                    coupons.erase(i);
                    break;
                }
            }
            if (flag)
            {
                cost += price;
            }
        }
        else
        { // 地铁
            coupons.emplace_back(coupon(price, t));
            cost += price;
        }
    }
    cout<<cost<<endl;
    return 0;
}