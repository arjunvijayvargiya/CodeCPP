#include<bits/stdc++.h>
#define long long ll
# define NO_OF_CHARS 256
 using namespace std;
// A utility function to get maximum of two integers
int max1(int a, int b) { return (a > b)? a: b; }

// The preprocessing function for Boyer Moore's bad character heuristic
void badCharHeuristic(string str, int sizet, int badchar[NO_OF_CHARS])
{
    int i;

    // Initialize all occurrences as -1
    for (i = 0; i < NO_OF_CHARS; i++)
         badchar[i] = -1;

    // Fill the actual value of last occurrence of a character
    for (i = 0; i < sizet; i++)
         badchar[(int) str[i]] = i;
}

/* A pattern searching function that uses Bad Character Heuristic of
   Boyer Moore Algorithm */
int search1( string txt,  string pat)
{
    int m = pat.length();
    int n = txt.length();

    int badchar[NO_OF_CHARS];

    /* Fill the bad character array by calling the preprocessing
       function badCharHeuristic() for given pattern */
    badCharHeuristic(pat, m, badchar);

    int s = 0;  // s is shift of the pattern with respect to text
    while(s <= (n - m))
    {
        int j = m-1;

        /* Keep reducing index j of pattern while characters of
           pattern and text are matching at this shift s */
        while(j >= 0 && pat[j] == txt[s+j])
            j--;

        /* If the pattern is present at current shift, then index j
           will become -1 after the above loop */
        if (j < 0)
        {


            /* Shift the pattern so that the next character in text
               aligns with the last occurrence of it in pattern.
               The condition s+m < n is necessary for the case when
               pattern occurs at the end of text */
           // s += (s+m < n)? m-badchar[txt[s+m]] : 1;
            return 1;
        }

        else
            /* Shift the pattern so that the bad character in text
               aligns with the last occurrence of it in pattern. The
               max function is used to make sure that we get a positive
               shift. We may get a negative shift if the last occurrence
               of bad character in pattern is on the right side of the
               current character. */
            s += max(1, j - badchar[txt[s+j]]);
    }
    return 0;
}
int main()
{
     int n;
     cin>>n;
     string strvec[n];
     for(int i=0;i<n;i++)
         cin>>strvec[i];
    int t;
     cin>>t;
     for(int i=0;i<t;i++)
     {
         int l,r;
         cin>>l>>r;
         string str1;
         cin>>str1;
         int cnt=0;
        for(int i=l-1;i<=r-1;i++)
        {

            if(search1(str1,strvec[i])==1)
                cnt++;
            cout<<"checked "<<str1<<" with "<<strvec[i]<<":"<<cnt<<endl;
        }
        cout<<cnt<<endl;
     }
    return 0;
}
