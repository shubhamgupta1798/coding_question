#include <iostream>
#include <sstream>
#include <set>
#include <algorithm>
#include <string>
using namespace std;

int lcp( string s1, string s2 )
{
   int result = 0;
   int length = min( s1.size(), s1.size() );
   while ( result < length && s1[result] == s2[result] )
   result++;
   return result;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, t, n1;
   string s3, str;
   set<string,int> s;
   set<string,int>::iterator i1, i2, it;
   cin >>n ;
   for ( int i = 0; i < n; i++ )
   {
      cin >> str;
      s.insert( pair<string,int>( str, i + 1 ) );
   }
    cin >> t;
   for ( int q = 0; q < t; q++ )
   {
      cin >> n1 >> s3;

       auto found = s.find(s3);
      if (found != s.end() && found->second <= n1 )
      {
         cout<<s3<<'\n';
         continue;
      }
      auto it1 = found;
      if(found==s.end())
      it1=s.insert(pair<string,int>(s3,-1)).first;

      int c1= -1, c2= -1;
      i1=it1;
      for(i1++;i1!= s.end();i1++)
      {
         if(i1->second<=n1)
         {
            c2 = lcp(i1->first,s3);
            break;
         }
      }

      i2 = it1;
      while(i2!=s.begin())
      {
         i2--;
         if(i2->second<=n1)
         {
            c1=lcp(i2->first,s3);
            break;
         }
      }

      if (c2>c1)
      {
         cout <<i1->first<<'\n';
      }
      else
      {
         it=i2;
         while(it!=s.begin())
         {
            it--;
            if(it->second<=n1)
            {
               if(lcp(it->first,s3)==c1)
               i2 = it;
               else
               break;
            }
         }
         cout<<i2->first<<'\n';
      }

      if (found==s.end())
      s.erase(s3);
      }
}
