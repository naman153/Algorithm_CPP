#include <bits/stdc++.h>

using namespace std;

int viralAdvertising(int n) {
    int share=5,like,cu=0;
    for(int i=0;i<n;i++){
        like=int(share/2);
        cu+=like;
        share=like*3;
    }
    return cu;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = viralAdvertising(n);

    fout << result << "\n";

    fout.close();

    return 0;
}
