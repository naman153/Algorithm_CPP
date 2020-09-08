#include <bits/stdc++.h>
#include<string.h>

using namespace std;

long repeatedString(string s, long n) {
    long int sum=0, i=0;
    int p=0;
    while(s[i]!='\0'){
        p++;
        i++;
    }
    long int r=n%(p);
    long int a= n/p;
    for(long i=0;i<p;i++){
        if(s[i]=='a'){
            sum++;
        }
    }
    sum=sum*a;
    for(int i=0;i<r;i++){
        if(s[i]=='a'){
            sum++;
        }
    }
    return sum;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
