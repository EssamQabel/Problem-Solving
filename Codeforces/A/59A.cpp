#include <bits/stdc++.h>
 
using namespace std;
 
void ToLowerCase( string &input, int size);
void ToUpperCase( string &input, int size );
 
int main()
{
    int upperLetters = 0, lowerLetters = 0;
    string input;
    getline( cin, input );
    int n = input.size();
    for ( int i = 0; i < n; ++i )
    {
        if ( input[i] < 97 ) upperLetters++;
        else lowerLetters++;
    }
    if ( upperLetters > lowerLetters )
        ToUpperCase( input, n );
    else
        ToLowerCase( input, n );
 
    for ( int i = 0; i < n; ++i)
    {
        cout << input[i];
    }
 
    return 0;
}
 
void ToLowerCase( string &input , int size)
{
    for ( int i = 0; i < size; ++i)
        if ( input[i] < 97 )
            input[i] += 32;
}
 
void ToUpperCase( string &input, int size )
{
    for ( int i = 0; i < size; ++i )
    {
        if ( input[i] >= 97 )
            input[i] -= 32;
    }
}