#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll mul_inv(ll a, ll b)
{
	ll b0 = b, t, q;
	ll x0 = 0, x1 = 1;
	if (b == 1) return 1;
	while (a > 1) {
		q = a / b;
		t = b, b = a % b, a = t;
		t = x0, x0 = x1 - q * x0, x1 = t;
	}
	if (x1 < 0) x1 += b0;
	return x1;
}

ll chinese_remainder(ll n[], ll a[], ll len)
{
	ll p, i, prod = 1, sum = 0;

	for (i = 0; i < len; i++) prod *= n[i];

	for (i = 0; i < len; i++) {
		p = prod / n[i];
		sum += a[i] * mul_inv(p, n[i]) * p;
	}

	return sum % prod;
}

int main(void)
{
	//int n[] = { 3, 5, 7 };
	//int a[] = { 2, 3, 2 };
    ll t;
    cin>>t;
    for(ll i=0;i<t;i++)
    {
        ll k,p;
        cin>>k>>p;
        ll arr1[k];
        ll arr2[k];
        for(ll j=0;j<k;j++)
            cin>>arr1[j];
        for(ll j=0;j<k;j++)
            cin>>arr2[j];
        cout<<chinese_remainder(arr1, arr2, k)%1000000007<<endl;
    }
	//printf("%d\n", chinese_remainder(n, a, sizeof(n)/sizeof(n[0])));
	return 0;
}
