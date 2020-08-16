#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mem(x,val) memset(x,val,sizeof(x))
#define F(i,n) for(ll i=0;i<n;i++)
#define pb push_back
#define endl '\n'
#define mod 1000000007
#define crap ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

ll countUniquePairs(ll nums[], ll target,ll n){
    sort(nums,nums+n);

    ll lastValidPairLarger = INT_MIN;
    ll left = 0, right = n-1;
    ll count = 0;

    while(left < right){
        ll currSum = nums[left] + nums[right];
        if (currSum == target){
            if(lastValidPairLarger != nums[right]){
                count++;
            }
            lastValidPairLarger = nums[right];
            left++; right--;
        } else if (currSum < target){
            left++;
        } else{
            right--;
        }
    }

    return count;
}

int main()
{

    map<int, string> table;
    table[0] = "zero", table[1] = "one", table[2] = "two", table[3] = "three", table[4] = "four", table[5] = "five", table[6] = "six", table[7] = "seven", table[8] = "eight", table[9] = "nine", table[10] = "ten", table[11] = "eleven", table[12] = "twelve", table[13] = "thirteen", table[14] = "fourteen", table[15] = "fifteen", table[16] = "sixteen", table[17] = "seventeen", table[18] = "eighteen", table[19] = "nineteen", table[20] = "twenty", table[21] = "twenty one", table[22] = "twenty two", table[23] = "twenty three", table[24] = "twenty four", table[25] = "twenty five", table[26] = "twenty six", table[27] = "twenty seven", table[28] = "twenty eight", table[29] = "twenty nine", table[30] = "thirty", table[31] = "thirty one", table[32] = "thirty two", table[33] = "thirty three", table[34] = "thirty four", table[35] = "thirty five", table[36] = "thirty six", table[37] = "thirty seven", table[38] = "thirty eight", table[39] = "thirty nine", table[40] = "forty", table[41] = "forty one", table[42] = "forty two", table[43] = "forty three", table[44] = "forty four", table[45] = "forty five", table[46] = "forty six", table[47] = "forty seven", table[48] = "forty eight", table[49] = "forty nine", table[50] = "fifty", table[51] = "fifty one", table[52] = "fifty two", table[53] = "fifty three", table[54] = "fifty four", table[55] = "fifty five", table[56] = "fifty six", table[57] = "fifty seven", table[58] = "fifty eight", table[59] = "fifty nine", table[60] = "sixty", table[61] = "sixty one", table[62] = "sixty two", table[63] = "sixty three", table[64] = "sixty four", table[65] = "sixty five", table[66] = "sixty six", table[67] = "sixty seven", table[68] = "sixty eight", table[69] = "sixty nine", table[70] = "seventy", table[71] = "sevent yone", table[72] = "seventy two", table[73] = "seventy three", table[74] = "seventy four", table[75] = "seventy five", table[76] = "seventy six", table[77] = "seventy seven", table[78] = "seventy eight", table[79] = "seventy nine", table[80] = "eighty", table[81] = "eighty one", table[82] = "eighty two", table[83] = "eighty three", table[84] = "eighty four", table[85] = "eighty five", table[86] = "eighty six", table[87] = "eighty seven", table[88] = "eighty eight", table[89] = "eighty nine", table[90] = "ninety", table[91] = "ninety one", table[92] = "ninety two", table[93] = "ninety three", table[94] = "ninety four", table[95] = "ninety five", table[96] = "ninety six", table[97] = "ninety seven", table[98] = "ninety eight", table[99] = "ninety nine", table[100] = "hundred";
    vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};

    ll int n;
    cin >> n;
    ll int mylist_[n];
    ll int andar;
    for (ll int i = 0; i < n; i++)
    {
        cin >> andar;
        mylist_[i] = andar;
    }
    ll int mylist_Size = n;
    ll int f_cnt = 0;
    for (ll int i = 0; i < mylist_Size; i++)
    {
        string str = table[mylist_[i]];
        int count = 0;
        ll int strSize = str.size();
        for (ll int i = 0; i < strSize; i++)
        {
            if (find(vowels.begin(), vowels.end(), str[i]) != vowels.end())
                count += 1;
        }
        f_cnt += count;
    }
    ll int fin_ans = countUniquePairs(mylist_, f_cnt, n);
    if (fin_ans <= 100)
        cout << table[fin_ans] ;
    else
        cout <<"greater 100";
    return 0;
}