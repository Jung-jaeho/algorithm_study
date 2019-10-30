#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main()
{
    string arr;
    int cnt=1;
    int i=0;
    int length=0;
    getline(cin, arr);
    length=arr.length();


    for(i=0 ; i<length;i++) {

        if (' ' == arr[i]) {
            cnt++;
        }
    }

    if(' '==arr[length-1])
        {
            cnt--;
        }
    if(' '==arr[0])
    {
        cnt--;
    }

    printf("%d",cnt);

    return 0;
}